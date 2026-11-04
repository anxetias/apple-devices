// name: FUN_100106618
// address: 100106618

void FUN_100106618(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _vDSP_vsmul(param_2,1,&DAT_1007009e8,param_2,1,*(undefined1 *)(param_4 + 0x19f7));
  _vDSP_vsmul(param_3,1,&DAT_1007009e8,param_3,1,*(undefined1 *)(param_4 + 0x19f7));
  FUN_10010648d(param_2,param_4);
  FUN_1001064f5(param_3,param_4);
  return;
}

