// rea decompile_all
// name: _verify_signature_rsa3k
// address: 0x223074
// body: available
// range: 0x223074-0x22313c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_verify_signature_rsa3k
          (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
          ulong param_6,long param_7)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  ulong local_10;
  
  local_30 = param_2 & 0xffffffff;
  local_20 = param_4 & 0xffffffff;
  local_10 = param_6 & 0xffffffff;
  auVar4._0_4_ = -(uint)((int)((ulong)param_1 >> 0x20) == 0 && (int)param_1 == 0);
  auVar4._4_4_ = -(uint)((int)param_3 == 0 && (int)((ulong)param_3 >> 0x20) == 0);
  auVar4._8_4_ = -(uint)((int)((ulong)param_5 >> 0x20) == 0 && (int)param_5 == 0);
  auVar4._12_4_ = -(uint)((int)param_7 == 0 && (int)((ulong)param_7 >> 0x20) == 0);
  iVar3 = movmskps((int)param_3,auVar4);
  if ((((((iVar3 == 0) && (param_2 != 0)) && (param_4 != 0)) &&
       ((param_6 != 0 && (*(long *)(param_7 + 0x20) != 0)))) &&
      ((plVar1 = *(long **)(*(long *)(param_7 + 0x20) + 0x10), plVar1 != (long *)0x0 &&
       ((puVar2 = (ulong *)*plVar1, puVar2 != (ulong *)0x0 && (*puVar2 == param_6)))))) &&
     (local_38 = param_1, local_28 = param_3, local_18 = param_5,
     iVar3 = _verify_pkcs1_sig(&local_38,puVar2[4],&local_18,&local_28,0xc00), iVar3 == 0)) {
    return 0;
  }
  return 0xffffffff;
}

