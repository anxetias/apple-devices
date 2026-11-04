// rea decompile_all
// name: FUN_10001058d
// address: 0x10001058d
// body: available
// range: 0x10001058d-0x1000107d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000106df to 0x100003084 FUN_100003084 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001058d(long param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x7a) == '\0') {
    FUN_100000cc6("ClientUSBDataSent",0x908,"db->db_writing",param_1);
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  if ((((6 < DAT_100021030) && (lVar3 != 0 && DAT_10002128c < 0)) && (param_2 != 0)) &&
     (**(int **)(param_1 + 0x20) == 0x6000000)) {
    uVar6 = FUN_100000d8c(param_2);
    FUN_1000008d2(7,0,&cf_result__s,uVar6);
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    FUN_100000b8b("ClientUSBDataSent",0x91e,param_1);
  }
  if (lVar3 != 0) {
    iVar4 = *(int *)(lVar3 + 0x80) + -1;
    *(int *)(lVar3 + 0x80) = iVar4;
    if (param_2 != 0) {
      if (2 < DAT_100021030) {
        uVar6 = FUN_10000302f(lVar3);
        uVar1 = *(ushort *)(lVar3 + 0x58);
        uVar7 = FUN_100008d22(*(undefined8 *)(lVar3 + 8));
        uVar2 = *(ushort *)(lVar3 + 0x5a);
        uVar8 = FUN_100000d8c(param_2);
        FUN_1000008d2(3,0,&cf__ssendfailed_s__d_>_s__d_result__s,"ClientUSBDataSent",uVar6,
                      uVar1 << 8 | uVar1 >> 8,uVar7,uVar2 << 8 | uVar2 >> 8,uVar8);
      }
LAB_1000106ce:
      FUN_100003084(lVar3);
      return;
    }
    if ((*(byte *)(lVar3 + 0x7c) & 4) == 0) {
      lVar3 = *(long *)(lVar3 + 8);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
        while ((*(int *)(lVar3 + 0x1bc) < 0x10 &&
               (plVar10 = *(long **)(lVar3 + 8), plVar10 != (long *)0x0))) {
          plVar11 = *(long **)(lVar3 + 0x10);
          if (*(long **)(lVar3 + 0x10) == (long *)0x0) {
            *(long **)(lVar3 + 0x10) = plVar10;
            plVar11 = plVar10;
          }
          iVar4 = 3;
          plVar10 = plVar11;
          do {
            if (*(int *)((long)plVar10 + 0x54) == 2) {
              iVar5 = FUN_1000107d4(plVar10);
              if (iVar5 == 1) {
                iVar4 = 1;
              }
              else if ((iVar5 == 2) || (iVar5 == 4)) goto LAB_100010771;
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              plVar10 = *(long **)(lVar3 + 8);
            }
          } while (plVar10 != plVar11);
          if (iVar4 != 1) break;
        }
LAB_100010771:
        if (*(long **)(lVar3 + 0x10) != (long *)0x0) {
          lVar9 = **(long **)(lVar3 + 0x10);
          if (lVar9 == 0) {
            lVar9 = *(long *)(lVar3 + 8);
          }
          *(long *)(lVar3 + 0x10) = lVar9;
        }
      }
    }
    else if (iVar4 == 0) {
      if (6 < DAT_100021030) {
        uVar6 = FUN_10000302f(lVar3);
        FUN_1000008d2(7,0,&cf__spendingI_Ocomplete_closingclient_s,"ClientUSBDataSent",uVar6);
      }
      goto LAB_1000106ce;
    }
  }
  return;
}

