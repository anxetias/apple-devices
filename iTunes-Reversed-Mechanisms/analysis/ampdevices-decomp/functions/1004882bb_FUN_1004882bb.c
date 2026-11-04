// name: FUN_1004882bb
// address: 1004882bb

undefined8 FUN_1004882bb(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 local_28 [16];
  
  FUN_1001b7a44();
  FUN_100487d03(local_28,param_2,&cf_uuid);
  FUN_1001b80b2(param_1,local_28);
  FUN_1001b7a50(local_28);
  cVar1 = FUN_1001b8428(param_1);
  if ((cVar1 != '\0') && (*(long *)(param_2 + 0x350) != 0)) {
    FUN_1001b90b6(local_28);
    FUN_1001b80b2(param_1,local_28);
    FUN_1001b7a50(local_28);
  }
  return param_1;
}

