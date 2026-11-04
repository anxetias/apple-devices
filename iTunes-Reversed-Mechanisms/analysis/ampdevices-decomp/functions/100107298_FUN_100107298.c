// name: FUN_100107298
// address: 100107298

undefined8 FUN_100107298(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = operator_new(0xc258);
  FUN_10011dd9a(plVar3,0);
  iVar2 = (**(code **)(*plVar3 + 0x20))
                    (plVar3,*(long *)(param_1 + 0x2428) + 0x494,*(long *)(param_1 + 0x2428) + 0xb38,
                     *(undefined4 *)(param_2 + 0x68));
  uVar4 = 0xfffffffe;
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar2 == 0) {
      cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
      *(bool *)(param_2 + 0x91) = cVar1 != '\0';
      if (cVar1 != '\0') {
        *(undefined2 *)(param_2 + 0x6c) = 2;
      }
      (**(code **)(*plVar3 + 8))(plVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}

