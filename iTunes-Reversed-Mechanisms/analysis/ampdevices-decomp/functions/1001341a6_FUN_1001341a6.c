// name: FUN_1001341a6
// address: 1001341a6

bool FUN_1001341a6(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int local_60 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  
  FUN_1001b7b04(local_60,"machineName");
  uVar3 = FUN_1001eb51b();
  FUN_1001aaedc(local_48,uVar3);
  FUN_100133c14(param_3,local_60,local_48);
  FUN_1001ab006(local_48);
  FUN_1001b7a50(local_60);
  iVar1 = FUN_100415834(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1b8),0);
  if (iVar1 != 0) {
    FUN_1001aa38a(local_60,&DAT_1008c4de0,(long)iVar1);
    FUN_1001aaadc(param_4,local_60);
    FUN_1001aaad2(local_60);
    goto LAB_100134483;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1c8);
  FUN_10032f11e(local_60);
  iVar2 = FUN_10041598c(uVar3,local_60,*(undefined8 *)(param_1 + 0x30));
  FUN_10032f104(local_60);
  FUN_1001b7b04(local_60,"needDiv");
  pcVar4 = "1";
  if (iVar2 == 0) {
    pcVar4 = "0";
  }
  FUN_1001355a0(param_3,local_60,pcVar4);
  FUN_1001b7a50(local_60);
  uVar3 = 2;
  switch(*(undefined4 *)(param_1 + 0x1b0)) {
  case 0:
    goto switchD_1001342d5_caseD_0;
  case 1:
    pcVar4 = "upgrade";
    uVar3 = 5;
    break;
  case 2:
    pcVar4 = "update";
    uVar3 = 0xb;
    break;
  case 3:
    pcVar4 = "missing";
    break;
  case 4:
    pcVar4 = "family";
    break;
  default:
    pcVar4 = (char *)0x0;
  }
  FUN_1001b7b04(local_60,"reason");
  FUN_1001aaf3c(local_48,pcVar4);
  FUN_100133c14(param_3,local_60,local_48);
  FUN_1001ab006(local_48);
  FUN_1001b7a50(local_60);
  FUN_1001b7b04(local_60,"upgrade-keybag");
  FUN_1001a82a6(local_38,1);
  FUN_1001a7bac(local_48,local_38);
  (**(code **)(*param_3 + 0x18))(param_3,local_60,local_48);
  FUN_1001ab240(local_48);
  FUN_1001a82e2(local_38);
  FUN_1001b7a50(local_60);
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    FUN_1001b7b04(local_60,"silent");
    FUN_1001a82a6(local_38,1);
    FUN_1001a7bac(local_48,local_38);
    (**(code **)(*param_3 + 0x18))(param_3,local_60,local_48);
    FUN_1001ab240(local_48);
    FUN_1001a82e2(local_38);
    FUN_1001b7a50(local_60);
  }
switchD_1001342d5_caseD_0:
  FUN_10032f0f2(local_48);
  FUN_10012d389(local_60,*(undefined8 *)(param_1 + 0x1c8),uVar3,*(undefined8 *)(param_1 + 0x30));
  FUN_1001a7b1c(local_48,local_58);
  FUN_1001a85d4(local_58);
  if (local_60[0] == 0) {
    FUN_10012d36a(local_60);
    FUN_1001a7b90(local_38,local_48);
    (**(code **)(*param_3 + 0x18))(param_3,local_60,local_38);
    FUN_1001ab240(local_38);
    FUN_1001b7a50(local_60);
  }
  FUN_1001a85d4(local_48);
LAB_100134483:
  return iVar1 == 0;
}

