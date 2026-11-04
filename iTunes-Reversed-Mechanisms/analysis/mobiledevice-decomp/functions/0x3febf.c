// rea decompile_all
// name: __ProgressCallback
// address: 0x3febf
// body: available
// range: 0x3febf-0x3fffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fff6 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __ProgressCallback(int param_1,char *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = _objc_retainBlock(*(undefined8 *)(param_5 + 0x10));
  if ((param_1 == 2 && lVar2 != 0) && (iVar1 = _strncmp(param_2,"META-INF/",9), iVar1 != 0)) {
    *(long *)(param_5 + 0x18) = *(long *)(param_5 + 0x18) + param_4;
    uVar3 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    __os_log_internal(0,uVar3,0,"%s: Progress for file %s : %lld / %lld","_ProgressCallback",param_2
                      ,param_3,param_4);
    (*(code *)PTR__objc_release_004410a0)(uVar3);
    dVar5 = (double)((100.0 / (float)*(ulong *)(param_5 + 8)) * (float)*(ulong *)(param_5 + 0x18));
    dVar4 = 100.0;
    if (dVar5 <= 100.0) {
      dVar4 = dVar5;
    }
    (**(code **)(lVar2 + 0x10))(dVar4,lVar2);
  }
  (*(code *)PTR__objc_release_004410a0)(lVar2);
  return;
}

