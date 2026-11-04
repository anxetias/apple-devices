// rea decompile_all
// name: std::vector<ACFURestoreHost::FileList,std::allocator<ACFURestoreHost::FileList>>::__assign_with_size[abi:ne190102]<ACFURestoreHost::FileList_const*,ACFURestoreHost::FileList_const*>
// address: 0x248e2e
// body: available
// range: 0x248e2e-0x248f4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x248f4a to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* void std::vector<ACFURestoreHost::FileList, std::allocator<ACFURestoreHost::FileList>
   >::__assign_with_size[abi:ne190102]<ACFURestoreHost::FileList const*, ACFURestoreHost::FileList
   const*>(ACFURestoreHost::FileList const*, ACFURestoreHost::FileList const*, long) */

void __thiscall
std::vector<ACFURestoreHost::FileList,std::allocator<ACFURestoreHost::FileList>>::
__assign_with_size_abi_ne190102_<ACFURestoreHost::FileList_const*,ACFURestoreHost::FileList_const*>
          (vector<ACFURestoreHost::FileList,std::allocator<ACFURestoreHost::FileList>> *this,
          FileList *param_1,FileList *param_2,long param_3)

{
  FileList *pFVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  pvVar2 = *(void **)this;
  uVar4 = *(ulong *)(this + 0x10);
  if ((ulong)((long)(uVar4 - (long)pvVar2) >> 4) < (ulong)param_3) {
    if (pvVar2 != (void *)0x0) {
      *(void **)(this + 8) = pvVar2;
      operator_delete(pvVar2);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      uVar4 = 0;
    }
    if ((ulong)param_3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_();
    }
    uVar6 = (long)uVar4 >> 3;
    if ((ulong)((long)uVar4 >> 3) <= (ulong)param_3) {
      uVar6 = param_3;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar6 = 0xfffffffffffffff;
    }
    __vallocate_abi_ne190102_(this,uVar6);
    pvVar3 = *(void **)(this + 8);
    pFVar1 = param_1;
  }
  else {
    pvVar3 = *(void **)(this + 8);
    lVar5 = (long)pvVar3 - (long)pvVar2;
    if ((ulong)param_3 <= (ulong)(lVar5 >> 4)) {
      lVar5 = (long)param_2 - (long)param_1;
      if (lVar5 != 0) {
        _memmove(pvVar2,param_1,lVar5 - 7);
      }
      *(long *)(this + 8) = (long)pvVar2 + lVar5;
      return;
    }
    pFVar1 = param_1 + lVar5;
    if (pvVar3 != pvVar2) {
      _memmove(pvVar2,param_1,lVar5 - 7);
      pvVar3 = *(void **)(this + 8);
    }
  }
  lVar5 = (long)param_2 - (long)pFVar1;
  if (lVar5 != 0) {
    _memmove(pvVar3,pFVar1,lVar5 - 7);
  }
  *(long *)(this + 8) = (long)pvVar3 + lVar5;
  return;
}

