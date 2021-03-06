/*
 *   Copyright (c) 2011  Higepon(Taro Minowa)  <higepon@users.sourceforge.jp>
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 *   TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _MONAGUI_IMAGE_ICON_
#define _MONAGUI_IMAGE_ICON_

namespace monagui {

template <class T> class ImageIcon : public Component
{
protected:
    MonAPI::scoped_ptr<T> image_;

    bool isImageValid() const
    {
        return image_->getWidth() != 0;
    }

public:

    explicit ImageIcon() : image_(new T())
    {
        setBounds(0, 0, 40, 40);
    }

    virtual ~ImageIcon()
    {
    }

    void paint(Graphics* g)
    {
        if ((image_->getWidth() != getWidth() || image_->getHeight() != getHeight()) &&
            isImageValid()) {
            image_->resize(getWidth(), getHeight());
        }
        g->setColor(getBackground());
        g->fillRect(0, 0, image_->getWidth(), image_->getHeight());
        g->drawImage(image_.get(), 0, 0);
    }

    T* image()
    {
        return image_.get();
    }
};

};

#endif // _MONAGUI_IMAGE_ICON_
