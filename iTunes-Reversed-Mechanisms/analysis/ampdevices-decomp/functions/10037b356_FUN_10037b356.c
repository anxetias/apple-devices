// name: FUN_10037b356
// address: 10037b356

long * FUN_10037b356(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_10037b1be(param_1,*(undefined4 *)(param_2 + 8));
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  if (lVar1 != param_2) {
    FUN_100382c5c(lVar1 + 0x10,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                  *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3);
  }
  return param_1;
}

