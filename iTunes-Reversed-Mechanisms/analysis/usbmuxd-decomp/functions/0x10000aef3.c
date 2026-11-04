// rea decompile_all
// name: FUN_10000aef3
// address: 0x10000aef3
// body: available
// range: 0x10000aef3-0x10000b0ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000afa7 to 0x10000368f FUN_10000368f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000b04f to 0x10000a81e FUN_10000a81e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000b0aa to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000aef3(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 in_RAX;
  undefined4 uVar4;
  undefined8 uVar3;
  int iVar5;
  long *plVar6;
  
  uVar4 = (undefined4)((ulong)in_RAX >> 0x20);
  if (*(uint *)(param_2 + 9) < 8) {
    if (3 < DAT_100021030) {
      uVar3 = FUN_100008d22(param_1);
      FUN_1000008d2(4,0,&cf__sdroppingruntfrom_s,"MuxInterfacev1Receive",uVar3);
    }
    uVar3 = 0x456;
  }
  else {
    puVar2 = (uint *)param_2[4];
    uVar1 = puVar2[1];
    if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) == param_3
       ) {
      uVar1 = *puVar2;
      if (uVar1 == 0) {
        FUN_10000a81e(param_1,param_2,param_3);
        return;
      }
      param_2[4] = (long)(puVar2 + 2);
      *(uint *)(param_2 + 9) = *(uint *)(param_2 + 9) - 8;
      if (uVar1 == 0x6000000) {
        FUN_10000368f(param_1,param_2,param_3 - 8);
        return;
      }
      if (6 < DAT_100021030) {
        uVar3 = FUN_100008d22(param_1);
        FUN_1000008d2(7,0,&cf__sunexpectedprotocol_dfrom_s,"MuxInterfacev1Receive",
                      uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18,uVar3);
      }
      uVar3 = 0x489;
    }
    else {
      if (2 < DAT_100021030) {
        uVar3 = FUN_100008d22(param_1);
        uVar1 = puVar2[1];
        FUN_1000008d2(3,0,&cf__sDroppingpacketfrom_s_Received_d_expected_dbytes,
                      "MuxInterfacev1Receive",uVar3,param_3,
                      CONCAT44(uVar4,uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8
                                     | uVar1 << 0x18));
      }
      FUN_100008d87(param_1,*(undefined1 *)(param_1 + 0x178));
      if ((DAT_10002128c._3_1_ & 0x40) != 0) {
        iVar5 = 0;
        plVar6 = param_2;
        do {
          FUN_100005174(plVar6[4],(int)plVar6[9],iVar5);
          iVar5 = iVar5 + (int)plVar6[9];
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      uVar3 = 0x46f;
    }
  }
  FUN_100000b8b("MuxInterfacev1Receive",uVar3,param_2);
  return;
}

