#ifndef _MONAPI_CSTRING_
#define _MONAPI_CSTRING_

#include <monapi/Array.h>

namespace MonAPI
{
    struct CString
    {
    protected:
        char* buffer;
        int length;

    public:
        CString();
        CString(const char* text, int length = -1);
        CString(const CString& text);
        virtual ~CString();

        int getLength() const { return this->length; }
        char operator [](int index) const;
        operator const char*() const { return this->buffer; }

        bool operator ==(const char* text) const;
        bool operator ==(const CString& text) const;
        inline bool operator !=(const char* text) const { return !this->operator ==(text); }
        inline bool operator !=(const CString& text) const { return !this->operator ==(text); }
        CString& operator =(const char* text);
        CString& operator =(const CString& text);
        void operator +=(const char* text);
        void operator +=(const CString& text);
        void operator +=(char ch);
        CString operator +(const char* text) const;
        CString operator +(const CString& text) const;

        bool startsWith(const CString& value) const;
        bool endsWith(const CString& value) const;
        int indexOf(char ch, int from = 0) const;
        int indexOf(const CString& value, int from = 0) const;
        int lastIndexOf(char ch, int from = -1) const;
        int lastIndexOf(const CString& value, int from = -1) const;

        CString substring(int start, int length) const;
        _A<CString> split(char ch) const;
        _A<CString> split(const CString& value) const;
        _A<CString> split_lines() const;

        CString toLower() const;
        CString toUpper() const;

        int reset();
        int insert(int start, const CString& text);
        int remove(int start, int length);
        int ltrim(char c = ' ');
        int rtrim(char c = ' ');
        int trim(char c = ' ');
    };
}

extern MonAPI::CString operator +(const char* text1, const MonAPI::CString& text2);

#endif  // __MONAPI_CSTRING_H__
