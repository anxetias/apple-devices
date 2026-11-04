// rea decompile_all
// name: FUN_100010331
// address: 0x100010331
// body: available
// range: 0x100010331-0x10001046b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100010331(long param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (param_1 == 0 || param_2 == 0) {
    if (2 < DAT_100021030) {
      pcVar4 = &cf__snullparam;
      uVar7 = 3;
      pcVar6 = (char *)0x0;
LAB_1000103f0:
      FUN_1000008d2(uVar7,pcVar6,pcVar4,"_send_msg");
      return 0;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x18);
    if (iVar3 != 0) {
      lVar5 = *(long *)(param_2 + 0x10);
      do {
        uVar1 = _AMDServiceConnectionSend(param_1,lVar5,iVar3);
        if ((int)uVar1 < 1) {
          piVar2 = ___error();
          if (*piVar2 != 0x23) {
            if (2 < DAT_100021030) {
              piVar2 = ___error();
              FUN_1000008d2(3,0,&cf__serrno__u,"_send_msg",*piVar2);
              return 0xffffffff;
            }
            return 0xffffffff;
          }
          if (DAT_100021030 < 7) {
            return 0;
          }
          pcVar6 = "com.apple.usbmuxd.Bonjour";
          pcVar4 = &cf__sblocking;
          uVar7 = 7;
          goto LAB_1000103f0;
        }
        lVar5 = (ulong)uVar1 + *(long *)(param_2 + 0x10);
        iVar3 = *(int *)(param_2 + 0x18) - uVar1;
        *(int *)(param_2 + 0x18) = iVar3;
        *(long *)(param_2 + 0x10) = lVar5;
        if (iVar3 == 0) {
          if (6 < DAT_100021030) {
            FUN_1000008d2(7,"com.apple.usbmuxd.Bonjour",&cf__sPolo,"_send_msg");
            iVar3 = *(int *)(param_2 + 0x18);
          }
          *(undefined8 *)(param_2 + 0x10) = 0;
          lVar5 = 0;
        }
      } while (iVar3 != 0);
    }
  }
  return 0;
}

