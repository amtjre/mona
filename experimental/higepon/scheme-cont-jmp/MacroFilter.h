#ifndef _MACRO_FILTER_
#define _MACRO_FILTER_

#include "Macro.h"
#include "util/HashMap.h"
namespace monash {

class Macro;
typedef ::util::HashMap<Macro*> Macros;

class MacroFilter
{
public:
    MacroFilter();
    virtual ~MacroFilter();

    int filter(SExp* from);
    void findDefineSyntaxes(SExp* root, SExps& defineSyntaxes);
    int storeDefineSyntaxes(SExp* defineSyntax);
    int findAndStoreDefineSyntaxes(SExp* root);
    int tryExpandMacro(SExp* dummy, SExp* sexp);
    int expandMacro(SExp* root, SExp* sexp);
    int foreachSExp(SExp* root, bool (SExp::*match)() const, int (MacroFilter::*func)(SExp* root, SExp* sexp));
    int foreachSExps(SExp* root, int (MacroFilter::*f)(SExp*, SExp*));
    int foreachSymbols(SExp* root, int (MacroFilter::*f)(SExp*, SExp*));

protected:
    int renameMatchAllKeywords(SExp* sexp);
    int renameMatchAllKeyword(SExp* dummy, SExp* root);

    Macros macros_;
    BindMap bindMap_;
    int index_;
};

}; // namespace monash

#endif // _MACRO_FILTER_
