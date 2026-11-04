// name: FUN_10027a642
// address: 10027a642

void FUN_10027a642(undefined2 *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_40 [16];
  
  *param_1 = 0x3300;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_1001b7a44();
  FUN_1001b7a44();
  FUN_10032f0f2();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1001b7a44();
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_1001b7a44();
  *(undefined4 *)((long)param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)((long)param_1 + 0xaf) = 1;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  FUN_10032f0f2(param_1 + 0x68);
  FUN_1001b7a44(param_1 + 0x70);
  FUN_10032f0f2(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)param_1 = param_2;
  *(undefined2 *)((long)param_1 + 1) = 0x33;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_1001a7bd2(param_1 + 0x28,0);
  FUN_1001b811c(param_1 + 0x18);
  FUN_1001b811c(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)((long)param_1 + 0xaf) = 1;
  FUN_1001b811c(param_1 + 0x38);
  FUN_1001b811c(param_1 + 0x4c);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  cVar1 = FUN_1001cd44e("show-store-purchases",1,0);
  *(char *)(param_1 + 0x66) = cVar1;
  *(undefined1 *)((long)param_1 + 0xcd) = 0;
  uVar3 = 0xf;
  if (cVar1 != '\0') {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar2 = FUN_1001cd44e("copy-files-when-adding",1,0);
  *(undefined1 *)(param_1 + 0x67) = uVar2;
  *(undefined1 *)((long)param_1 + 0xcf) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1001a8348(local_40,0,1);
  FUN_1001a7b1c(param_1 + 0x68,local_40);
  FUN_1001a85d4(local_40);
  FUN_1001b811c(param_1 + 0x70);
  FUN_1001a8348(local_40,0,1);
  FUN_1001a7b1c(param_1 + 0x78,local_40);
  FUN_1001a85d4(local_40);
  return;
}

