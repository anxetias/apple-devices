// name: FUN_1003697e2
// address: 1003697e2

undefined8 FUN_1003697e2(long param_1,undefined4 *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long local_48;
  long local_40;
  undefined4 local_34;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0x335e;
  }
  if (*(long *)(param_1 + 0x2cb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x2cb0) + 0x68);
    iVar2 = FUN_1001d4041(uVar1,"genius_config",0,1,"data",0,&local_48,&local_40);
    if ((local_48 == 0 || local_40 == 0) || iVar2 != 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100170dc5(0);
      if (param_2 == (undefined4 *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_1001d408a(uVar1,"genius_config",0,1,"version",&local_34);
        if (iVar2 == 0) {
          *param_2 = local_34;
          iVar2 = 0;
        }
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
    if (local_40 != 0) {
      FUN_1001c64c1();
    }
  }
  return uVar3;
}

