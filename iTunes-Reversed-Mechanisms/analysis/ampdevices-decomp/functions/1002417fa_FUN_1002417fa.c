// name: FUN_1002417fa
// address: 1002417fa

bool FUN_1002417fa(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  if ((*(int *)(param_2 + 0x18) == 0) ||
     (cVar1 = (**(code **)(*param_1 + 8))(param_1), cVar1 != '\0')) {
    if ((int)param_1[0x92] != 0) {
      if (*(long *)(param_2 + 8) != 0) {
        lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x58);
LAB_100241841:
        return *(int *)(lVar2 + 0x30) == (int)param_1[0x92];
      }
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 != 0) goto LAB_100241841;
    }
    if (*(char *)(param_2 + 0x454) == '\x01') {
      cVar1 = FUN_1003b6f88(*(undefined4 *)(param_2 + 0x18),param_2 + 0x458,
                            *(undefined4 *)((long)param_1 + 0x1c),param_1 + 4);
      return cVar1 != '\0';
    }
  }
  return false;
}

