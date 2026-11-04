// name: FUN_1003a59ae
// address: 1003a59ae

undefined8 FUN_1003a59ae(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  FUN_10047d1cb(local_28,*param_2,PTR_cf_cloud_album_id_100844b10);
  FUN_1001b80b2(*(undefined8 *)(param_1 + 8),local_28);
  FUN_1001b7a50(local_28);
  cVar1 = FUN_1001b8428(*(undefined8 *)(param_1 + 8));
  uVar2 = 0x2349;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

