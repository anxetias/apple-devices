// name: FUN_1003926fe
// address: 1003926fe

void FUN_1003926fe(long param_1,long param_2,undefined8 param_3,void *param_4,void *param_5)

{
  int iVar1;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  
  FUN_10032f0f2();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined2 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  ___bzero(param_1 + 0x20,0x411);
  ___bzero(param_1 + 0x448,0x410);
  FUN_1001b7a44(param_1 + 0x858);
  *(undefined4 *)(param_1 + 0x868) = 0;
  FUN_1001aa318(param_1 + 0x870);
  FUN_1001aa318(param_1 + 0x878);
  FUN_1001b7eb0(local_48,param_3);
  iVar1 = FUN_100392890(local_48,param_4);
  if (iVar1 == 0) {
    FUN_1001b8172(param_1 + 0x858,local_48);
    _memcpy((void *)(param_1 + 0x10),param_4,0x420);
    _memcpy((void *)(param_1 + 0x438),param_5,0x420);
    *(undefined1 *)(param_1 + 0x430) = 1;
    *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 0x58);
    FUN_1001aaef6(local_38,param_3);
    FUN_1001aaadc(param_1 + 0x870,local_38);
    FUN_1001ab006(local_38);
  }
  FUN_1001b7a50(local_48);
  return;
}

