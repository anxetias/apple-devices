// name: FUN_100111e4c
// address: 100111e4c

undefined8
FUN_100111e4c(undefined8 param_1,uint param_2,short param_3,undefined1 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_34;
  
  local_34 = 0;
  if (param_2 < 2) {
    cVar1 = FUN_100111efe(param_1,param_2);
    if (cVar1 == '\0') {
      return 0xfffffffe;
    }
    iVar2 = FUN_100111ac0(param_1,param_2,(int)param_3,cVar1,param_4,&local_34);
  }
  else {
    if (param_2 != 3) goto LAB_100111ee2;
    iVar2 = FUN_100111ac0(param_1,3,(int)param_3,0x6c,param_4,&local_34);
  }
  if (iVar2 != 0) {
    return 0xfffffffe;
  }
LAB_100111ee2:
  *param_5 = local_34;
  return 0;
}

