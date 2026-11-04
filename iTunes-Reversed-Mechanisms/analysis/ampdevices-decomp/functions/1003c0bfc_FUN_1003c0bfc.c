// name: FUN_1003c0bfc
// address: 1003c0bfc

void FUN_1003c0bfc(long param_1)

{
  int iVar1;
  undefined4 in_register_00000004;
  long lVar2;
  
  if ((*(char *)(param_1 + 0x1eb6) == '\0') && (*(int *)(param_1 + 0x1eb0) == 0)) {
    *(undefined1 *)(param_1 + 0x1eb6) = 1;
    lVar2 = FUN_1001eaad3(param_1 + 0x1f00);
    if (lVar2 != 0) {
      FUN_1001ea9a5(lVar2,param_1 + 0x1f00);
      *(long *)(param_1 + 0x1e88) = lVar2;
      FUN_1001ea4ac(param_1 + 0x1f90);
      iVar1 = FUN_1001880a7(*(undefined8 *)(param_1 + 0x470),*(undefined8 *)(lVar2 + 0x10),
                            *(undefined8 *)(lVar2 + 0x18),param_1 + 0x1df0,FUN_1003c0cdd,
                            param_1 + 0x1df0,CONCAT44(in_register_00000004,1));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1eb0) = 0xffffffdc;
        *(undefined1 *)(param_1 + 0x1eb6) = 0;
        FUN_1001ea29d(param_1 + 0x1f90);
        return;
      }
      return;
    }
    *(undefined1 *)(param_1 + 0x1eb6) = 0;
  }
  FUN_1001ea4ac(param_1 + 0x1f90);
  return;
}

