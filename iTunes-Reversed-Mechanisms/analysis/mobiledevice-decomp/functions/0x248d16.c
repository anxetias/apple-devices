// rea decompile_all
// name: std::vector<__CFString_const*,std::allocator<__CFString_const*>>::__assign_with_size[abi:ne190102]<__CFString_const*const*,__CFString_const*const*>
// address: 0x248d16
// body: available
// range: 0x248d16-0x248e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x248e28 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<__CFString const*, std::allocator<__CFString const*>
   >::__assign_with_size[abi:ne190102]<__CFString const* const*, __CFString const*
   const*>(__CFString const* const*, __CFString const* const*, long) */

void __thiscall
std::vector<__CFString_const*,std::allocator<__CFString_const*>>::
__assign_with_size_abi_ne190102_<__CFString_const*const*,__CFString_const*const*>
          (vector<__CFString_const*,std::allocator<__CFString_const*>> *this,__CFString **param_1,
          __CFString **param_2,long param_3)

{
  __CFString **pp_Var1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  
  pvVar2 = *(void **)this;
  uVar4 = *(ulong *)(this + 0x10);
  if ((ulong)((long)(uVar4 - (long)pvVar2) >> 3) < (ulong)param_3) {
    if (pvVar2 != (void *)0x0) {
      *(void **)(this + 8) = pvVar2;
      operator_delete(pvVar2);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      uVar4 = 0;
    }
    if ((ulong)param_3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
    }
    uVar6 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= (ulong)param_3) {
      uVar6 = param_3;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    __vallocate_abi_ne190102_(this,uVar6);
    pvVar3 = *(void **)(this + 8);
    pp_Var1 = param_1;
  }
  else {
    pvVar3 = *(void **)(this + 8);
    sVar5 = (long)pvVar3 - (long)pvVar2;
    if ((ulong)param_3 <= (ulong)((long)sVar5 >> 3)) {
      sVar5 = (long)param_2 - (long)param_1;
      if (sVar5 != 0) {
        _memmove(pvVar2,param_1,sVar5);
      }
      *(size_t *)(this + 8) = (long)pvVar2 + sVar5;
      return;
    }
    pp_Var1 = (__CFString **)((long)param_1 + sVar5);
    if (pvVar3 != pvVar2) {
      _memmove(pvVar2,param_1,sVar5);
      pvVar3 = *(void **)(this + 8);
    }
  }
  sVar5 = (long)param_2 - (long)pp_Var1;
  if (sVar5 != 0) {
    _memmove(pvVar3,pp_Var1,sVar5);
  }
  *(size_t *)(this + 8) = (long)pvVar3 + sVar5;
  return;
}

