// rea decompile_all
// name: FUN_100006f62
// address: 0x100006f62
// body: available
// range: 0x100006f62-0x10000735d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100006f62(undefined8 *param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (*(int *)((long)param_1 + 0x54) != 0) {
    if (DAT_100021030 < 3) {
      return 5;
    }
    uVar2 = FUN_10000302f(param_1);
    FUN_1000008d2(3,0,&cf__sClient_srequestingconnectwhileinthewrongstate__d_,"HandleUSBMuxConnect",
                  uVar2,*(undefined4 *)((long)param_1 + 0x54));
    return 5;
  }
  if (param_1[1] != 0) {
    if (DAT_100021030 < 3) {
      return 5;
    }
    uVar2 = FUN_10000302f(param_1);
    FUN_1000008d2(3,0,&cf__s__dClient_srequestingconnecttodevice_u__d_butalreadyconnectedto_u___x__d
                  ,"HandleUSBMuxConnect",0xd85,uVar2,param_2,param_3 << 8 | param_3 >> 8,
                  *(undefined4 *)(param_1[1] + 0x188),*(undefined4 *)(param_1[1] + 0x18c),
                  *(ushort *)((long)param_1 + 0x5a) << 8 | *(ushort *)((long)param_1 + 0x5a) >> 8);
    return 5;
  }
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x19) = 0;
  lVar3 = FUN_100008f33(param_2);
  param_1[1] = lVar3;
  if (lVar3 == 0) {
    if (DAT_100021030 < 3) {
      return 2;
    }
    uVar2 = FUN_10000302f(param_1);
    FUN_1000008d2(3,0,&cf__sClient_srequestingconnectto_u__dfailed_nosuchdevice,
                  "HandleUSBMuxConnect",uVar2,param_2,param_3 << 8 | param_3 >> 8);
    return 2;
  }
  if (6 < DAT_100021030) {
    uVar2 = FUN_100000dea(param_1[6]);
    FUN_1000008d2(7,0,&cf__sClient_srequestingattachto_d___x__d,"HandleUSBMuxConnect",uVar2,param_2,
                  *(undefined4 *)(param_1[1] + 0x18c),param_3 << 8 | param_3 >> 8);
    lVar3 = param_1[1];
  }
  iVar1 = *(int *)(lVar3 + 0x1ac);
  if ((iVar1 == 2) || (iVar1 == 4)) {
    *param_1 = *(undefined8 *)(lVar3 + 8);
    *(undefined8 **)(lVar3 + 8) = param_1;
    if (*(int *)(lVar3 + 0x18) == 2) {
      iVar1 = FUN_100007d8d(param_1,param_3);
      if (iVar1 == 0) goto LAB_1000072fe;
      if (DAT_100021030 < 4) {
        return iVar1;
      }
      uVar2 = FUN_10000302f(param_1);
      pcVar4 = &cf__sClient_sMuxNetworkInitiateConnectfailed;
    }
    else {
      if (*(int *)(lVar3 + 0x18) != 1) {
        if (DAT_100021030 < 3) {
          return 4;
        }
        uVar2 = FUN_10000302f(param_1);
        FUN_1000008d2(3,0,&cf__sClient_srequestingconnectto_d___x__dfailed_unknownMIEtype_d,
                      "HandleUSBMuxConnect",uVar2,param_2,*(undefined4 *)(param_1[1] + 0x18c),
                      param_3 << 8 | param_3 >> 8,*(undefined4 *)(param_1[1] + 0x18));
        return 4;
      }
      iVar1 = FUN_100007bed(param_1,param_3);
      if (iVar1 == 0) {
LAB_1000072fe:
        if (DAT_100021030 < 6) {
          return 0;
        }
        uVar2 = FUN_10000302f(param_1);
        FUN_1000008d2(6,0,&cf_clientconnected__s__d<_>dev_d___x__d,uVar2,
                      *(ushort *)(param_1 + 0xb) << 8 | *(ushort *)(param_1 + 0xb) >> 8,
                      *(undefined4 *)(param_1[1] + 0x188),*(undefined4 *)(param_1[1] + 0x18c),
                      param_3 << 8 | param_3 >> 8);
        return 0;
      }
      if (DAT_100021030 < 4) {
        return 4;
      }
      uVar2 = FUN_10000302f(param_1);
      pcVar4 = &cf__sClient_sMuxTCPInitiateConnectfailed;
      iVar1 = 4;
    }
    FUN_1000008d2(4,0,pcVar4,"HandleUSBMuxConnect",uVar2);
    return iVar1;
  }
  if (iVar1 == 3) {
    iVar1 = 7;
    if (DAT_100021030 < 4) goto LAB_10000723e;
    pcVar4 = &cf__sClient_srequestingconnectto_u___x__dfailed_devicenotrunning_devicetoonew;
  }
  else {
    iVar1 = 2;
    if (DAT_100021030 < 4) goto LAB_10000723e;
    pcVar4 = &cf__sClient_srequestingconnectto_u___x__dfailed_devicenotrunning;
  }
  uVar2 = FUN_10000302f(param_1);
  FUN_1000008d2(4,0,pcVar4,"HandleUSBMuxConnect",uVar2,param_2,*(undefined4 *)(param_1[1] + 0x18c),
                param_3 << 8 | param_3 >> 8);
LAB_10000723e:
  param_1[1] = 0;
  return iVar1;
}

