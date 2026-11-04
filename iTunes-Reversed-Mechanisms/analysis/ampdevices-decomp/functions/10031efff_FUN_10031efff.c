// name: FUN_10031efff
// address: 10031efff

bool FUN_10031efff(undefined8 param_1,long param_2,uint param_3,short *param_4,undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  *param_4 = 0;
  lVar3 = FUN_1002f9fc5();
  while ((lVar3 != 0 &&
         ((((lVar4 = FUN_1002b5390(lVar3), lVar4 != param_2 ||
            (uVar2 = FUN_1002b1255(lVar3,0), (uVar2 & param_3) == 0)) ||
           (cVar1 = FUN_1002b545d(lVar3,param_4,param_5), cVar1 == '\0')) || (*param_4 == 0))))) {
    lVar3 = FUN_1002fa118(lVar3);
  }
  return *param_4 != 0;
}

