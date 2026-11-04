// rea decompile_all
// name: _Img4DecodeGetInteger64FromSection
// address: 0x222047
// body: available
// range: 0x222047-0x2220bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _Img4DecodeGetInteger64FromSection
                (long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = 6;
  if (param_4 != (undefined8 *)0x0 && param_1 != 0) {
    uVar2 = _Img4DecodeGetPropertyFromSection
                      (param_1,param_2,param_3 | 0xe000000000000000,2,&local_48);
    if ((int)uVar2 == 0) {
      uVar1 = _DERParseInteger64(&uStack_30,param_4);
      uVar2 = 0;
      if (uVar1 != 0) {
        *param_4 = 0;
        uVar2 = (ulong)uVar1;
      }
    }
  }
  return uVar2;
}

