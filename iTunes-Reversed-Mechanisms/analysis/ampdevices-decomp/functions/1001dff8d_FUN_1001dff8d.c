// name: FUN_1001dff8d
// address: 1001dff8d

void FUN_1001dff8d(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  do {
    if (uVar1 == 0) {
      return;
    }
    uVar2 = 1;
    while (param_1[uVar2] != param_2) {
      bVar3 = uVar2 == uVar1;
      uVar2 = uVar2 + 1;
      if (bVar3) {
        return;
      }
    }
    FUN_1001dffe0(param_1,uVar2,1);
    uVar1 = *param_1;
  } while( true );
}

