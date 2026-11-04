// name: FUN_100533300
// address: 100533300

int FUN_100533300(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  char local_f8 [80];
  char local_a8 [80];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_48 = param_6;
  local_38 = param_5;
  iVar3 = FUN_10017d477(param_1,local_f8,0);
  uVar2 = local_38;
  uVar1 = local_48;
  if (iVar3 == 0) {
    if (local_f8[0] == '\0') {
      iVar3 = -0x57f;
    }
    else {
      local_40 = param_2;
      local_34 = param_4;
      iVar3 = FUN_100188bae(param_1,param_2,param_3,local_48,local_a8);
      if (iVar3 == 0) {
        iVar3 = -0x57f;
        if (local_a8[0] != '\0') {
          iVar3 = 0;
        }
        if ((char)local_34 == '\0') {
          iVar3 = 0;
        }
      }
      else if ((char)uVar2 != '\0' && (char)local_34 != '\0') {
        FUN_1001b7b04(local_58,local_40);
        iVar3 = FUN_100189043(param_1,local_58,uVar1);
        FUN_1001b7a50(local_58);
      }
    }
  }
  return iVar3;
}

