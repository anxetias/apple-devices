// rea decompile_all
// name: std::vector<unsigned_char,std::allocator<unsigned_char>>::__append
// address: 0x251ac8
// body: available
// range: 0x251ac8-0x251bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x251bbc to 0x2a9ff0 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x251bd3 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<unsigned char, std::allocator<unsigned char> >::__append(unsigned long, unsigned char
   const&) */

void __thiscall
std::vector<unsigned_char,std::allocator<unsigned_char>>::__append
          (vector<unsigned_char,std::allocator<unsigned_char>> *this,ulong param_1,uchar *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  
  pvVar2 = *(void **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)pvVar2) < param_1) {
    pvVar6 = *(void **)this;
    sVar5 = (long)pvVar2 - (long)pvVar6;
    uVar3 = sVar5 + param_1;
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
    }
    uVar1 = *(long *)(this + 0x10) - (long)pvVar6;
    uVar4 = uVar1 * 2;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar4 = 0x7fffffffffffffff;
    if (uVar1 < 0x3fffffffffffffff) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new(uVar4);
    }
    _memset((void *)((long)pvVar2 + sVar5),(uint)*param_2,param_1);
    _memcpy(pvVar2,pvVar6,sVar5);
    *(void **)this = pvVar2;
    *(ulong *)(this + 8) = (long)((long)pvVar2 + sVar5) + param_1;
    *(ulong *)(this + 0x10) = uVar4 + (long)pvVar2;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  else {
    pvVar6 = pvVar2;
    if (param_1 != 0) {
      pvVar6 = (void *)((long)pvVar2 + param_1);
      _memset(pvVar2,(uint)*param_2,param_1);
    }
    *(void **)(this + 8) = pvVar6;
  }
  return;
}

