// rea decompile_all
// name: std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
// address: 0x24ca22
// body: available
// range: 0x24ca22-0x24cb18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24cb14 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::vector<unsigned char, std::allocator<unsigned char> >::assign(unsigned long, unsigned char
   const&) */

void __thiscall
std::vector<unsigned_char,std::allocator<unsigned_char>>::assign
          (vector<unsigned_char,std::allocator<unsigned_char>> *this,ulong param_1,uchar *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  
  pvVar1 = *(void **)this;
  uVar2 = *(ulong *)(this + 0x10);
  if (uVar2 - (long)pvVar1 < param_1) {
    if (pvVar1 != (void *)0x0) {
      *(void **)(this + 8) = pvVar1;
      operator_delete(pvVar1);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      uVar2 = 0;
    }
    if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
    }
    uVar5 = uVar2 * 2;
    if (uVar2 * 2 <= param_1) {
      uVar5 = param_1;
    }
    uVar3 = 0x7fffffffffffffff;
    if (uVar2 < 0x3fffffffffffffff) {
      uVar3 = uVar5;
    }
    __vallocate_abi_ne190102_(this,uVar3);
    pvVar1 = *(void **)(this + 8);
    _memset(pvVar1,(uint)*param_2,param_1);
    *(ulong *)(this + 8) = (long)pvVar1 + param_1;
  }
  else {
    uVar5 = *(long *)(this + 8) - (long)pvVar1;
    uVar2 = param_1;
    if (uVar5 < param_1) {
      uVar2 = uVar5;
    }
    if (uVar2 != 0) {
      _memset(pvVar1,(uint)*param_2,uVar2);
    }
    sVar4 = param_1 - uVar5;
    if (param_1 < uVar5 || sVar4 == 0) {
      lVar6 = param_1 + *(long *)this;
    }
    else {
      pvVar1 = *(void **)(this + 8);
      _memset(pvVar1,(uint)*param_2,sVar4);
      lVar6 = (long)pvVar1 + sVar4;
    }
    *(long *)(this + 8) = lVar6;
  }
  return;
}

