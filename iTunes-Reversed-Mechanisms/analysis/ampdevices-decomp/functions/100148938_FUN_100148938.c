// name: FUN_100148938
// address: 100148938

void FUN_100148938(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  plVar1 = *(long **)(param_1 + 8);
  FUN_1001b7f2a(local_30);
  (**(code **)(*plVar1 + 0x28))(local_40,plVar1,local_30);
  FUN_1001b7a50(local_30);
  cVar3 = FUN_1001b8428(local_40);
  if (cVar3 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_1001a85ae(local_30,local_40,3);
    FUN_1001a871e(uVar2,local_30);
    FUN_1001a85d4(local_30);
  }
  FUN_1001b7a50(local_40);
  return;
}

