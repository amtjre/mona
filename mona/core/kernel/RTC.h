/*!
    \file  rtc.h
    \brief definition for rtc

    definition for tester
    Copyright (c) 2002 Higepon
    WITHOUT ANY WARRANTY

    \author  Higepon
    \version $Revision$
    \date   create:2002/11/11 update:$Date$
*/

#ifndef _MONA_RTC_
#define _MONA_RTC_

#include <global.h>

/*----------------------------------------------------------------------
    RTC
----------------------------------------------------------------------*/
class RTC {

  public:
    static void init();
    static void getDate(KDate* date);
    static void increaseEpochNanoSec(uint64_t nanoSec)
    {
        epochNanosec_ += nanoSec;
    }
    static void syncEpochNanosec()
    {
        epochNanosec_ = readEpochNanoSeconds();
    }
    static uint64_t epochNanoseconds()
    {
        return epochNanosec_;
    }

  private:
    static uint64_t readEpochNanoSeconds();
    static uint8_t read(uint8_t reg);
    static void write(uint8_t reg, uint8_t value);
    static int readDateOnce(KDate* date);

    inline static int convert(uint8_t value)
    {
        return (value & 0x0f) + ( (value >> 4) * 10);
    }
    inline static bool isLeapYear(int year)
    {
        return (((year % 4) == 0) && (((year % 100) != 0) || ((year % 400) == 0)));
    }

  private:
    static const uint8_t RTC_ADRS  = 0x70;
    static const uint8_t RTC_DATA  = 0x71;
    static const uint8_t RTC_SEC   = 0x00;
    static const uint8_t RTC_MIN   = 0x02;
    static const uint8_t RTC_HOUR  = 0x04;
    static const uint8_t RTC_DOW   = 0x06;
    static const uint8_t RTC_DAY   = 0x07;
    static const uint8_t RTC_MONTH = 0x08;
    static const uint8_t RTC_YEAR  = 0x09;
    static uint64_t epochNanosec_;
};

#endif
