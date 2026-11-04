// rea decompile_all
// name: _ziplocal_getLong
// address: 0x1bcd83
// body: available
// range: 0x1bcd83-0x1bce46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ziplocal_getLong(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_34;
  
  local_34 = 0;
  iVar1 = _unzlocal_getByte();
  iVar2 = -1;
  if (iVar1 == 0) {
    lVar6 = (long)local_34;
    iVar1 = _unzlocal_getByte(param_1,param_2);
    if (iVar1 == 0) {
      lVar3 = (long)local_34;
      iVar1 = _unzlocal_getByte(param_1,param_2);
      if (iVar1 == 0) {
        lVar5 = (long)local_34;
        iVar2 = _unzlocal_getByte(param_1,param_2,&local_34);
        lVar4 = 0;
        if (iVar2 == 0) {
          lVar4 = (long)local_34 * 0x1000000 + lVar5 * 0x10000 + lVar3 * 0x100 + lVar6;
        }
        goto LAB_001bcde8;
      }
    }
  }
  lVar4 = 0;
LAB_001bcde8:
  *param_3 = lVar4;
  return iVar2;
}

