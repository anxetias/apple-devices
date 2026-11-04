// rea decompile_all
// name: FUN_100005a0c
// address: 0x100005a0c
// body: available
// range: 0x100005a0c-0x100005b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100005a0c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  iVar3 = _CFSocketGetNative(*(undefined8 *)(param_1 + 0xa8));
  uVar8 = 2;
  if (iVar3 != -1) {
    plVar1 = (long *)(param_1 + 0xb8);
    puVar2 = *(undefined8 **)(param_1 + 0xb8);
    while (puVar2 != (undefined8 *)0x0) {
      if (*(int *)(puVar2 + 9) == 0) {
LAB_100005a97:
        *(undefined8 *)(param_1 + 0xb8) = *puVar2;
        *puVar2 = 0;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        FUN_100000b8b("SCEInterfaceSend",0x492,puVar2);
      }
      else {
        uVar4 = _CFSocketGetNative(*(undefined8 *)(param_1 + 0xa8));
        lVar5 = FUN_10000e063(uVar4,puVar2[4],*(undefined4 *)(puVar2 + 9),0,0);
        if (lVar5 < 0) {
          piVar6 = ___error();
          if (*piVar6 != 0x23) {
            if (DAT_100021030 < 3) {
              return 2;
            }
            uVar8 = FUN_10000302f(param_1);
            piVar6 = ___error();
            iVar3 = *piVar6;
            piVar6 = ___error();
            pcVar7 = _strerror(*piVar6);
            FUN_1000008d2(3,0,&cf__sfailedforclient_s__d__s,"SCEInterfaceSend",uVar8,iVar3,pcVar7);
            return 2;
          }
          if (*plVar1 != 0) {
            _CFSocketEnableCallBacks(*(undefined8 *)(param_1 + 0xa8),8);
            return 1;
          }
          break;
        }
        puVar2[4] = puVar2[4] + lVar5;
        piVar6 = (int *)(puVar2 + 9);
        *piVar6 = *piVar6 - (int)lVar5;
        iVar3 = *piVar6;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) - (int)lVar5;
        if (iVar3 == 0) goto LAB_100005a97;
      }
      puVar2 = (undefined8 *)*plVar1;
    }
    *(long **)(param_1 + 0xc0) = plVar1;
    if ((*(int *)(param_1 + 0xa0) != 0) && (6 < DAT_100021030)) {
      FUN_1000008d2(7,0,&cf__soutofbuffers_butsce_>sce_bufcount__d,"SCEInterfaceSend");
    }
    *(undefined4 *)(param_1 + 200) = 0;
    uVar8 = 0;
  }
  return uVar8;
}

