// name: FUN_10046f4fe
// address: 10046f4fe

bool FUN_10046f4fe(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  piVar1 = (int *)_CMBaseObjectGetDerivedStorage();
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0x62797473)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(piVar1 + 2);
  }
  piVar1 = (int *)_CMBaseObjectGetDerivedStorage(param_2);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0x62797473)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(piVar1 + 2);
  }
  return lVar3 == lVar2;
}

