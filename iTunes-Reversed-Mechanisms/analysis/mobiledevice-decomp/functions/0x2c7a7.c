// rea decompile_all
// name: _update
// address: 0x2c7a7
// body: available
// range: 0x2c7a7-0x2c8ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _update(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
           ulong param_6,void *param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = *param_5;
  uVar3 = 0x10 - lVar1;
  if (uVar3 <= param_6 && lVar1 != 0) {
    _memcpy((void *)(lVar1 + param_4),param_7,uVar3);
    iVar2 = _ccdrbg_generate(param_1,param_2,param_3,1,param_4,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    param_7 = (void *)((long)param_7 + uVar3);
    *param_5 = 0;
    param_6 = param_6 - uVar3;
  }
  while( true ) {
    if (param_6 < 0x10) {
      if (param_6 != 0) {
        _memcpy((void *)(param_4 + *param_5),param_7,param_6);
        *param_5 = *param_5 + param_6;
      }
      return 0;
    }
    iVar2 = _ccdrbg_generate(param_1,param_2,param_3,1,param_7,param_4);
    if (iVar2 != 0) break;
    param_7 = (void *)((long)param_7 + 0x10);
    param_6 = param_6 - 0x10;
  }
  return iVar2;
}

