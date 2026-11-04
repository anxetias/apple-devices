// name: FUN_10053feae
// address: 10053feae

undefined4 FUN_10053feae(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)((long)param_1 + 0x4bc) == '\0') {
    *(undefined1 *)((long)param_1 + 0x4bc) = 1;
    cVar1 = (**(code **)(*param_1 + 0x1c0))(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1);
      *(undefined4 *)(param_1 + 0x98) = uVar2;
      *(byte *)(param_1 + 0x97) = '\x02' - ((byte)uVar2 & 1);
    }
  }
  return (int)param_1[0x98];
}

