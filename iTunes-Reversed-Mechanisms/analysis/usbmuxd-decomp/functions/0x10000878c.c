// rea decompile_all
// name: FUN_10000878c
// address: 0x10000878c
// body: available
// range: 0x10000878c-0x100008967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000878c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(char *)(param_1 + 0x1c0) == '\0') &&
     (*(uint *)(param_1 + 0x1b8) < *(uint *)(param_1 + 0x1a0))) {
    do {
      lVar2 = FUN_100000aa4("StartReads",0x126,1);
      if (lVar2 == 0) {
        if (1 < DAT_100021030) {
          FUN_1000008d2(2,0,&cf_MuxNextFreeBufferisoutofmemory);
          return -0x1ffffd43;
        }
        return -0x1ffffd43;
      }
      *(long *)(lVar2 + 0x40) = param_1;
      *(undefined1 *)(lVar2 + 0x79) = 1;
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
      iVar1 = (**(code **)(**(long **)(param_1 + 0x158) + 0x108))
                        (*(long **)(param_1 + 0x158),*(undefined1 *)(param_1 + 0x178),
                         *(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x4c),FUN_100008968,
                         lVar2);
      if (iVar1 != 0) {
        if (iVar1 == -0x1ffffd13) {
          iVar1 = -0x1ffffd13;
          if (4 < DAT_100021030) {
            uVar3 = FUN_100008d22(param_1);
            FUN_1000008d2(5,0,&cf__sdevicedisconnected__s,"StartReads",uVar3);
          }
LAB_100008937:
          *(undefined1 *)(lVar2 + 0x79) = 0;
          *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -1;
          FUN_100000b8b("StartReads",0x15b,lVar2);
          return iVar1;
        }
        if (6 < DAT_100021030) {
          uVar3 = FUN_100008d22(param_1);
          uVar4 = FUN_100000d8c(iVar1);
          FUN_1000008d2(7,0,&cf__s_USBreaderroron_s__s,"StartReads",uVar3,uVar4);
        }
        if (((iVar1 == -0x1fffbfb1) &&
            (iVar1 = FUN_100008d87(param_1,*(undefined1 *)(param_1 + 0x178)), iVar1 != 0)) ||
           (iVar1 = (**(code **)(**(long **)(param_1 + 0x158) + 0x108))
                              (*(long **)(param_1 + 0x158),*(undefined1 *)(param_1 + 0x178),
                               *(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x4c),
                               FUN_100008968,lVar2), iVar1 != 0)) goto LAB_100008937;
      }
    } while (*(uint *)(param_1 + 0x1b8) < *(uint *)(param_1 + 0x1a0));
  }
  return 0;
}

