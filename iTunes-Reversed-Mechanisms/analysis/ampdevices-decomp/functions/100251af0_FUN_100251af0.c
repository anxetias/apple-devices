// name: FUN_100251af0
// address: 100251af0

undefined4 FUN_100251af0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0xc),0x10cc024b);
  FUN_1001b7eb0(local_40,uVar2);
  FUN_1001c334a(local_30,0x10cf0010);
  FUN_1001b7eb0(local_20,*(undefined8 *)(param_1 + 0x28));
  uVar1 = FUN_100251b97(local_20,local_40,local_30);
  FUN_1001b7a50(local_20);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_40);
  return uVar1;
}

