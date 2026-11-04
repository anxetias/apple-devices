// rea decompile_all
// name: __sendCommandToDeviceWithTimeout
// address: 0xf17b3
// body: available
// range: 0xf17b3-0xf19eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf19e7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __sendCommandToDeviceWithTimeout(double param_1,long param_2,long param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong local_460;
  double local_458;
  int local_44c;
  ulong local_448;
  undefined4 local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_458 = param_1;
  __loadFirmwareInfo();
  uVar1 = *(uint *)(param_2 + 0x5c);
  if (*(long *)(param_2 + 0xd0) != 0) {
    _CFRelease();
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined4 *)(param_2 + 0xd8) = 0;
  }
  if (param_3 != 0) {
    uVar2 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_3);
    *(undefined8 *)(param_2 + 0xd0) = uVar2;
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    uVar1 = __sendCommandToDeviceByDevReqWithTimeout(local_458,param_2,param_3,param_4);
  }
  else {
    if (((local_458 != 300.0) || (NAN(local_458))) && ((uVar1 & 0xfffffff0) == 0xf0)) {
      _AMRLog(4,&
                cf_Sendingcommandsbypipewithtimeoutsisn_tsupported_Ifatimeoutwassupplied_it_llbeignored_
             );
    }
    puVar5 = local_438;
    ___bzero(puVar5,0x400);
    _CFStringGetCString(param_3,puVar5,0x400,0x8000100);
    uVar3 = ___strlcat_chk(puVar5,"\n",0x400,0x400);
    uVar1 = 1;
    if (uVar3 < 0x400) {
      uVar4 = (ulong)((int)uVar3 + 0xfU & 0x7f0);
      if (uVar4 <= uVar3) goto joined_r0x000f1908;
      ___bzero(local_438 + uVar3);
      do {
        local_448 = 0;
        local_440 = 0;
        local_44c = 0xc;
        local_460 = uVar4 & 0xffffffff;
        uVar1 = __sendControlPacket(param_2,3,8,&local_460,&local_44c,&local_448);
        if ((uVar1 != 0) || (local_44c == 0)) {
          uVar1 = -(uint)(uVar1 == 0) | uVar1;
          goto LAB_000f19bf;
        }
        if ((char)local_448 != '\b') {
          uVar1 = 7;
          goto LAB_000f19bf;
        }
        uVar3 = local_448 >> 0x20;
        if (uVar3 != 0) {
          uVar1 = __AMRecoveryModeDeviceWriteBulk(param_2,1,puVar5,uVar3);
          if (uVar1 != 0) goto LAB_000f19bf;
          uVar4 = uVar4 - uVar3;
          puVar5 = puVar5 + uVar3;
        }
joined_r0x000f1908:
      } while (uVar4 != 0);
      uVar1 = 0;
    }
  }
LAB_000f19bf:
  *(uint *)(param_2 + 0xd8) = uVar1;
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

