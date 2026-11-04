// rea decompile_all
// name: _DERImg4DecodePayload
// address: 0x2a6393
// body: available
// range: 0x2a6393-0x2a64b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a64b0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERImg4DecodePayload(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_f0 = 6;
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) goto LAB_002a648d;
  ___bzero(&local_c8,0xa0);
  iVar1 = _DERImg4DecodePayloadWithProperties(param_1,&local_c8);
  if (iVar1 == 0) {
    *param_2 = local_c8;
    param_2[1] = uStack_c0;
    param_2[2] = local_b8;
    param_2[3] = uStack_b0;
    param_2[4] = local_a8;
    param_2[5] = uStack_a0;
    param_2[6] = local_98;
    param_2[7] = uStack_90;
    param_2[8] = local_88;
    param_2[9] = uStack_80;
    *(undefined4 *)(param_2 + 10) = local_78;
    *(undefined4 *)((long)param_2 + 0x54) = uStack_74;
    *(undefined4 *)(param_2 + 0xb) = uStack_70;
    *(undefined4 *)((long)param_2 + 0x5c) = uStack_6c;
  }
  else {
    uStack_f0 = _DERParseSequenceToObject(param_1,6,&_DERImg4PayloadItemSpecs,param_2,0x90,0);
    if ((int)uStack_f0 != 0) goto LAB_002a648d;
    iVar1 = _DERImg4DecodeTagCompare(param_2,0x494d3450);
    if (iVar1 != 0) {
      uStack_f0 = 2;
      goto LAB_002a648d;
    }
    if ((param_2[10] != 0) &&
       (uStack_f0 = _DERImg4DecodePayloadCompression(param_2 + 10), (int)uStack_f0 != 0))
    goto LAB_002a648d;
  }
  uStack_f0 = 0;
LAB_002a648d:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uStack_f0;
}

