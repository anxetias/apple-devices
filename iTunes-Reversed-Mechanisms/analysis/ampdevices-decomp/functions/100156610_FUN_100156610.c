// name: FUN_100156610
// address: 100156610

undefined8 FUN_100156610(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_1001b7b04(local_38,"rental-id");
    local_58 = *(undefined8 *)(param_1 + 0x1a0);
    FUN_10014f7ae(local_50,&local_58,0);
    FUN_1001a7bac(local_48,local_50);
    (**(code **)(*param_3 + 0x18))(param_3,local_38,local_48);
    FUN_1001ab240(local_48);
    FUN_1001aae6c(local_50);
    FUN_1001b7a50(local_38);
  }
  FUN_1001b7b04(local_38,"dsid");
  local_58 = *(undefined8 *)(param_1 + 0x30);
  FUN_10014f7ae(local_50,&local_58,0);
  FUN_1001a7bac(local_48,local_50);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,local_48);
  FUN_1001ab240(local_48);
  FUN_1001aae6c(local_50);
  FUN_1001b7a50(local_38);
  FUN_1001b7b04(local_38,"guid");
  FUN_100133b90(param_3,local_38,param_1 + 0x1b8);
  FUN_1001b7a50(local_38);
  if (*(char *)(param_1 + 0x1d8) == '\x01') {
    FUN_1001b7b04(local_38,"desktop-guid");
    FUN_10032f174(local_48);
    FUN_10012a852(param_3,local_38,local_48);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_38);
  }
  cVar1 = FUN_1001b8428(param_1 + 0x1a8);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_38,"hw.model");
    FUN_100133b90(param_3,local_38,param_1 + 0x1a8);
    FUN_1001b7a50(local_38);
  }
  FUN_1001b7b04(local_38,"checkin-ack-sar");
  FUN_1001a7b90(local_48,param_1 + 0x1c8);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,local_48);
  FUN_1001ab240(local_48);
  FUN_1001b7a50(local_38);
  return 1;
}

