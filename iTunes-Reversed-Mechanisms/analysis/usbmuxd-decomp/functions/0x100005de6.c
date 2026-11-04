// rea decompile_all
// name: FUN_100005de6
// address: 0x100005de6
// body: available
// range: 0x100005de6-0x100005ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100005de6(long param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  
  plVar2 = (long *)(param_1 + 0x90);
  plVar5 = *(long **)(param_1 + 0x90);
  do {
    if (plVar5 == (long *)0x0) {
LAB_100005e98:
      *(long **)(param_1 + 0x98) = plVar2;
      if ((*(int *)(param_1 + 0xa0) != 0) && (6 < DAT_100021030)) {
        FUN_1000008d2(7,0,&cf__soutofbuffers_butsce_>sce_bufcount__d,"MuxSendToClient");
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
      if ((*(byte *)(param_1 + 0x7c) & 4) == 0) {
        lVar7 = *(long *)(param_1 + 0xa8);
        if (lVar7 != 0) {
          uVar11 = 1;
LAB_100005ef5:
          _CFSocketEnableCallBacks(lVar7,uVar11);
        }
        FUN_1000055c0(param_1);
        uVar11 = 0;
      }
      else {
        if (6 < DAT_100021030) {
          uVar11 = FUN_10000302f(param_1);
          FUN_1000008d2(7,0,&cf__spendingI_Ocomplete_closingclient_s,"MuxSendToClient",uVar11);
        }
        FUN_100003084(param_1);
        uVar11 = 0xfffffffe;
      }
      return uVar11;
    }
    if ((int)plVar5[9] != 0) {
      lVar7 = FUN_10000e063(*(undefined4 *)(param_1 + 0x4c),plVar5[4],(int)plVar5[9],0,0);
      if (lVar7 < 0) {
        piVar8 = ___error();
        if (*piVar8 != 0x23) {
          if (2 < DAT_100021030) {
            uVar11 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            uVar3 = *(ushort *)(param_1 + 0x5a);
            uVar9 = FUN_10000302f(param_1);
            uVar4 = *(ushort *)(param_1 + 0x58);
            piVar8 = ___error();
            iVar6 = *piVar8;
            piVar8 = ___error();
            pcVar10 = _strerror(*piVar8);
            FUN_1000008d2(3,0,&cf__ssendfailedforclient_s__d_>_s__d__d__s,"MuxSendToClient",uVar11,
                          uVar3 << 8 | uVar3 >> 8,uVar9,uVar4 << 8 | uVar4 >> 8,iVar6,pcVar10);
          }
          *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 8;
          FUN_1000041b4(*(undefined8 *)(param_1 + 8),0,param_1);
          FUN_100003084(param_1);
          return 0xffffffff;
        }
      }
      else {
        iVar6 = (int)lVar7;
        plVar5[4] = plVar5[4] + (long)iVar6;
        plVar1 = plVar5 + 9;
        *(int *)plVar1 = (int)*plVar1 - iVar6;
        lVar7 = *plVar1;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) - iVar6;
        *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
        if ((int)lVar7 == 0) goto LAB_100005e4f;
      }
      if (*plVar2 != 0) {
        lVar7 = *(long *)(param_1 + 0x20);
        uVar11 = 8;
        goto LAB_100005ef5;
      }
      goto LAB_100005e98;
    }
LAB_100005e4f:
    *plVar2 = *plVar5;
    *plVar5 = 0;
    FUN_100000b8b("MuxSendToClient",0x6c6,plVar5);
    plVar5 = (long *)*plVar2;
  } while( true );
}

