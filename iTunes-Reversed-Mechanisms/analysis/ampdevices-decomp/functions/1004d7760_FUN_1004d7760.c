// name: FUN_1004d7760
// address: 1004d7760

undefined8 FUN_1004d7760(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1001a7b90(local_30,&PTR_cf_topic_10085e3d0);
  FUN_1001aa318(local_40);
  FUN_1001aa318(local_38);
  cVar1 = FUN_1001a921a(uVar2,local_30,local_38);
  puVar3 = local_40;
  if (cVar1 != '\0') {
    puVar3 = local_38;
  }
  FUN_1001a8c1c(param_1,puVar3);
  FUN_1001ab006(local_38);
  FUN_1001ab006(local_40);
  FUN_1001ab240(local_30);
  return param_1;
}

