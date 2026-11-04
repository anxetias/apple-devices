// name: FUN_10042fec9
// address: 10042fec9

void FUN_10042fec9(undefined8 param_1,undefined1 *param_2,int param_3,uint param_4,
                  undefined1 *param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_40;
  uint local_34;
  
  local_40 = 0;
  uVar4 = 0;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    *param_5 = *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  uVar3 = param_4 & 0xff;
  FUN_1004279a4(param_1,uVar3,param_2,param_3,param_7);
  if ((byte)((char)param_4 - 1U) < 2) {
    local_34 = param_4;
    iVar1 = FUN_1001e0710(param_2,param_3,&local_40,3,0);
    if (iVar1 == 0) {
      iVar1 = FUN_1001e0710(param_2,param_3,&local_40,2,0);
      uVar4 = iVar1 + 1;
      param_4 = local_34;
    }
    else {
      uVar4 = iVar1 + 2;
      param_4 = local_34;
    }
  }
  if (((char)param_4 == '\x03') || (uVar3 == 0)) {
    uVar4 = FUN_1001e0710(param_2,param_3,&local_40,1,0);
  }
  if (param_3 - uVar4 != 0) {
    uVar2 = FUN_100170dc5(0,param_2 + uVar4,param_3 - uVar4);
    *param_6 = uVar2;
  }
  return;
}

