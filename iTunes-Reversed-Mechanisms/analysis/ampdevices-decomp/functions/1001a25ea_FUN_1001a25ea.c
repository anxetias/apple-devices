// name: FUN_1001a25ea
// address: 1001a25ea

int FUN_1001a25ea(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_38 = (ulong)param_4;
  uVar5 = 0;
  lVar4 = 0;
  local_40 = param_1;
  do {
    if (local_38 <= uVar5) {
LAB_1001a26d1:
      iVar2 = 0;
      goto LAB_1001a26d3;
    }
    local_48 = 1;
    iVar2 = FUN_1001d6c1d(local_40,&local_48,param_3 + uVar5,param_2,1);
    if (local_48 != 0 && (iVar2 == -0x27 || iVar2 == 0)) {
      uVar5 = uVar5 + local_48;
      if (uVar5 < local_38) {
        *(undefined1 *)(param_3 + uVar5) = 0;
        cVar1 = FUN_1001e1d17(param_3 + lVar4,"\r\n\r\n",0,0,0,0);
        if (cVar1 == '\0') {
          if (3 < uVar5) {
            lVar4 = uVar5 - 3;
          }
          goto LAB_1001a269b;
        }
      }
      goto LAB_1001a26d1;
    }
LAB_1001a269b:
    if (iVar2 != 0) goto LAB_1001a26d3;
    iVar2 = FUN_1001ceb57(param_2,0xffffffffffffffff,0xffffffffffffffff,0);
  } while (iVar2 == 0);
  FUN_1001d6fac(local_40);
LAB_1001a26d3:
  uVar3 = (ulong)(param_4 - 1);
  if (uVar5 < local_38) {
    uVar3 = uVar5;
  }
  *(undefined1 *)(param_3 + uVar3) = 0;
  return iVar2;
}

