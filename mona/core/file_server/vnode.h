/*!
    \file  vnode.h
    \brief vnode

    Copyright (c) 2006 Higepon
    WITHOUT ANY WARRANTY

    \author  Higepon
    \version $Revision$
    \date   create:2006/05/24 update:$Date$
*/

#ifndef _VNODE_
#define _VNODE_

#include <monalibc.h>
#include <map>
#include "monapi/CString.h"
#include "monapi/messages.h"
#include "FileSystem.h"
#include "sys/types.h"


// enum vtype
// {
//     VNON,
//     VREG,
//     VDIR,
//     VBLK,
//     VCHR,
//     VLNK,
//     VSOCK,
//     VFIFO,
//     VBAD
// };

// typedef struct vnode
// {
//     enum vtype v_type;
//     FileSystem* fs;
//     void* fnode;
// };

namespace io
{

class Context
{
public:
    Context() : memory(NULL), offset(0), size(0) {}
    virtual ~Context()
    {
        if (NULL == memory) return;
        delete memory;
    }

    uint32_t tid;
    MonAPI::SharedMemory* memory;
    uint32_t offset;
    uint32_t origin;
    uint32_t size;
    uint32_t resultSize;
};

typedef struct
{
    Vnode* vnode;
    io::Context context;
} FileInfo;

};
class Vnode
{
public:
    Vnode() : fs(NULL), fnode(NULL), mountedVnode(NULL) {}
    int type;
    FileSystem* fs;
    void* fnode;
    enum
    {
        NONE,
        REGULAR,
        DIRECTORY,
        LINK,
        BAD,
        ANY // for search only
    };
    Vnode* mountedVnode;
};




#endif // _VNODE_
