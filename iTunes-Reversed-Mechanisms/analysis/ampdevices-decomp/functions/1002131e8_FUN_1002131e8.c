// name: FUN_1002131e8
// address: 1002131e8

void FUN_1002131e8(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  iVar1 = *(int *)(param_1 + 0x2ad8);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2ad4) == 0xe) {
      if (10 < param_2) {
        return;
      }
      iVar1 = *(int *)(&DAT_100718a38 + (ulong)param_2 * 4);
    }
    else if (*(char *)(param_1 + 0x2850) == '\x01') {
      iVar1 = 0x10cc00af;
      if (*(char *)(param_1 + 0x2851) != '\0') {
        iVar1 = 0x10cc00c3;
      }
    }
    else {
      iVar1 = 0x10cc00af;
      if ((((*(char *)(param_1 + 0x2854) == '\0') && (*(char *)(param_1 + 0x2855) == '\0')) &&
          ((*(char *)(param_1 + 0x2856) != '\x01' || (*(char *)(param_1 + 0x2ac9) != '\0')))) &&
         (iVar1 = FUN_100213330(param_2,*(undefined1 *)(param_1 + 0x2852)), iVar1 == 0)) {
        return;
      }
    }
  }
  uVar2 = FUN_100416f20(*(undefined4 *)(param_1 + 0x21a0),iVar1);
  FUN_1001b7eb0(local_30,uVar2);
  FUN_1001b8dfc(local_20,param_1 + 0x21e8);
  FUN_1001bbec4(local_40,local_30,local_20);
  FUN_1001bb41a(local_40,param_1 + 0x28b8);
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_20);
  FUN_1001b7a50(local_30);
  return;
}

