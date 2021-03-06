/*
Copyright (c) 2005 bayside

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation files
(the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge,
publish, distribute, sublicense, and/or sell copies of the Software,
and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#if !defined(_IMAGE_H_INCLUDED_)
#define _IMAGE_H_INCLUDED_

namespace monagui {
    /**
     イメージクラス
    */
    class Image : public Object {
    private:
        /** 幅 */
        int width;
        /** 高さ */
        int height;
        /** GUIサーバーID */
        dword guisvrID;
        /** GUIサーバー上のビットマップオブジェクト */
        guiserver_bitmap* bitmap;

        Image() {}
    protected:
        void initFromFilePath(const char* path);
        void disposeImage();

    public:


        /**
         コンストラクタ
         @param width 幅
         @param height 高さ
         */
        Image(int width, int height);

        /**
         コンストラクタ.
         デコードはサーバー側で行っている。
         @param path ファイル名
         */
        Image(const String& path);

        /** デストラクタ */
        virtual ~Image();

        /** ハンドルを得る */
        inline dword getHandle() { return this->bitmap->Handle; }

        /** 幅を得る */
        inline int getWidth() const { return this->width; }

        /** 高さを得る */
        inline int getHeight() const { return this->height; }

        /** RGB24bitデータを得る */
        inline dword* getSource() { return this->bitmap->Data; }

        void resize(int h, int w);

        /** 指定された点の色を得る */
        dword getPixel(int x, int y)
        {
            if (x < 0 || this->width <= x || y < 0 || this->height <= y) {
                return 0;
            } else {
                return this->bitmap->Data[x + this->width * y];
            }
        }

        /**
         点を打つ
         @param x X座標
         @param y Y座標
         @param color 色
        */
        void setPixel(int x, int y, dword color)
        {
            if (0 <= x && x < this->width && 0 <= y && y < this->height) {
                this->bitmap->Data[x + this->width * y] = color;
            }
        }

        void copy(const Image* src, int destX, int destY)
        {
            copy(this, src, destX, destY);
        }

        static void copy(Image* dest, const Image* src, int destX, int destY)
        {
            const int destNumPixesl = dest->width * dest->height;
            const int bytesPerLine = sizeof(dword) * src->getWidth();
            for (int i = 0; i < src->getHeight(); i++) {
                const int destOffset = destX + (i + destY) * dest->width;
                if (destOffset + bytesPerLine > destNumPixesl) {
                    break;
                }
                memcpy(&(dest->bitmap->Data[destOffset]), &(src->bitmap->Data[src->width * i]), bytesPerLine);
            }
        }
    };
}

#endif // _IMAGE_H_INCLUDED_
