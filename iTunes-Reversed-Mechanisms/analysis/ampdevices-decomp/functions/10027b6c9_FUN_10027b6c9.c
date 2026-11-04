// name: FUN_10027b6c9
// address: 10027b6c9

void FUN_10027b6c9(undefined4 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1001c62d9(param_1,0x1358);
  *param_1 = 1;
  uVar1 = FUN_1001ea62b(0);
  *(undefined8 *)((long)param_1 + 0x30e) = uVar1;
  uVar1 = FUN_1001ea62b(0);
  *(undefined8 *)(param_1 + 0x4d4) = uVar1;
  uVar1 = FUN_1001ea62b(0);
  *(undefined8 *)(param_1 + 0x155) = uVar1;
  uVar1 = FUN_1001ea62b(0);
  *(undefined8 *)(param_1 + 0x4be) = uVar1;
  uVar1 = FUN_1001ea62b(0);
  *(undefined8 *)(param_1 + 0x4d2) = uVar1;
  *(undefined1 *)((long)param_1 + 0x33a) = 1;
  *(undefined1 *)((long)param_1 + 0x32b) = 1;
  *(undefined1 *)((long)param_1 + 0x5a5) = 1;
  *(undefined1 *)((long)param_1 + 0x59e) = 1;
  cVar2 = FUN_1002b8dbb();
  *(ushort *)((long)param_1 + 0x128a) = (cVar2 == '\x01') + 1;
  *(undefined1 *)((long)param_1 + 0x128e) = 1;
  *(undefined2 *)(param_1 + 0x4b1) = 0;
  *(undefined8 *)(param_1 + 0x4b2) = 0xac44;
  *(undefined1 *)(param_1 + 0x4b4) = 0;
  param_1[0x4d1] = 0;
  return;
}

