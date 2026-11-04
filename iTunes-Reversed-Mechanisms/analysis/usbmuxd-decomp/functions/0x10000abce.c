// rea decompile_all
// name: FUN_10000abce
// address: 0x10000abce
// body: available
// range: 0x10000abce-0x10000aef2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000abce(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  
  if (*(char *)(*param_1 + 0x1c0) == '\x01') {
    iVar3 = -1;
    if (6 < DAT_100021030) {
      uVar4 = FUN_100008d22();
      FUN_1000008d2(7,0,&cf__sdevice_sisclosing,"WriteAsyncInternal",uVar4);
    }
  }
  else {
    iVar6 = *(int *)(param_1[1] + 0x48);
    piVar1 = (int *)(*param_1 + 0x1bc);
    *piVar1 = *piVar1 + 1;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    do {
      pcVar8 = FUN_10000b481;
      if (iVar6 == 0) {
        pcVar8 = FUN_10000ab6e;
      }
      iVar9 = -0x10;
      while (plVar2 = *(long **)(*param_1 + 0x158),
            iVar3 = (**(code **)(*plVar2 + 0x150))
                              (plVar2,*(undefined1 *)(*param_1 + 0x179),
                               *(undefined8 *)(param_1[1] + 0x20),iVar6,5000,15000,pcVar8,param_1),
            iVar3 != 0) {
        if (5 < DAT_100021030) {
          uVar4 = FUN_100008d22(*param_1);
          uVar5 = FUN_100000d8c(iVar3);
          FUN_1000008d2(6,0,&cf__sUSBwriteerroron_s__s,"WriteAsyncInternal",uVar4,uVar5);
        }
        if (iVar3 != -0x1fffbfb1) {
          if (iVar3 != -0x1ffffd13) {
            if (iVar6 != 0) goto LAB_10000ad84;
            if (2 < DAT_100021030) {
              uVar4 = FUN_100008d22(*param_1);
              uVar5 = FUN_100000d8c(iVar3);
              FUN_1000008d2(3,0,&cf__sfailedtosendzerolengthpacketon_s__s,"WriteAsyncInternal",uVar4
                            ,uVar5);
              return 0;
            }
            goto LAB_10000aede;
          }
          lVar7 = *param_1;
          iVar3 = -0x1ffffd13;
          uVar4 = 5;
          if (DAT_100021030 < 5) goto LAB_10000ae5c;
LAB_10000ae2d:
          uVar5 = FUN_100008d22(lVar7);
          FUN_1000008d2(uVar4,0,&cf__sdevicedisconnected__s,"WriteAsyncInternal",uVar5);
          goto LAB_10000ae56;
        }
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf_clearpipestall);
        }
        iVar3 = FUN_100008d87(*param_1,*(undefined1 *)(*param_1 + 0x179));
        if (iVar3 != 0) {
          if (6 < DAT_100021030) {
            uVar4 = FUN_100008d22(*param_1);
            uVar5 = FUN_100000d8c(iVar3);
            FUN_1000008d2(7,0,&cf__sclearpipestallon_sfailed__s,"WriteAsyncInternal",uVar4,uVar5);
          }
          if (2 < DAT_100021030) {
            lVar7 = *param_1;
            uVar4 = 3;
            goto LAB_10000ae2d;
          }
          goto LAB_10000ae56;
        }
        if (6 < DAT_100021030) {
          uVar4 = FUN_100008d22(*param_1);
          FUN_1000008d2(7,0,&cf__sretrywriteon_s,"WriteAsyncInternal",uVar4);
        }
        iVar9 = iVar9 + 1;
        if (iVar9 == 0) goto LAB_10000aede;
      }
      iVar3 = 0;
      if (iVar6 == 0) {
        return 0;
      }
LAB_10000ad84:
      iVar6 = 0;
    } while (*(uint *)(param_1[1] + 0x48) % (uint)*(ushort *)(*param_1 + 0x17c) == 0);
    if (iVar3 == 0) {
LAB_10000aede:
      iVar3 = 0;
    }
    else {
LAB_10000ae56:
      lVar7 = *param_1;
LAB_10000ae5c:
      if (2 < DAT_100021030) {
        uVar4 = FUN_100008d22();
        uVar5 = FUN_100000d8c(iVar3);
        FUN_1000008d2(3,0,&cf__sUSBwriteerroron_s__s,"WriteAsyncInternal",uVar4,uVar5);
        lVar7 = *param_1;
      }
      *(int *)(lVar7 + 0x1bc) = *(int *)(lVar7 + 0x1bc) + -1;
    }
  }
  return iVar3;
}

