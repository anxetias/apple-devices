// name: FUN_10014b662
// address: 10014b662

undefined1 FUN_10014b662(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001bcc22(local_40,param_2,"!\"#$%&\'()+,/:;<=>?@[\\]^`{|}~",0);
  FUN_1001bcc22(local_30,param_3,"!\"#$%&\'()+,/:;<=>?@[\\]^`{|}~",0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    FUN_1001a8772(param_1 + 8,"&",1);
  }
  uVar1 = FUN_1001b83ae(local_40);
  uVar2 = FUN_1001b83f0(local_40);
  param_1 = param_1 + 8;
  FUN_1001a8772(param_1,uVar1,uVar2);
  FUN_1001a8772(param_1,"=",1);
  uVar1 = FUN_1001b83ae(local_30);
  uVar2 = FUN_1001b83f0(local_30);
  FUN_1001a8772(param_1,uVar1,uVar2);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_40);
  return 1;
}

