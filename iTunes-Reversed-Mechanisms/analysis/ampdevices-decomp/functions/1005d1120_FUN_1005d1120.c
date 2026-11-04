// name: FUN_1005d1120
// address: 1005d1120

undefined8 FUN_1005d1120(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  
  FUN_1001aa318();
  switch(param_2) {
  case 9:
    bVar3 = (param_3 & 1) == 0;
    ppuVar1 = &PTR_cf_com_apple_videos_movies_purchase_10088fbc0;
    ppuVar2 = &PTR_cf_com_apple_videos_movies_purchase_cloud_10088fbc8;
    break;
  case 10:
    bVar3 = (param_3 & 1) == 0;
    ppuVar1 = &PTR_cf_com_apple_videos_tvshows_purchase_10088fba0;
    ppuVar2 = &PTR_cf_com_apple_videos_tvshows_purchase_cloud_10088fba8;
    break;
  default:
    if ((param_3 & 2) == 0) {
      return param_1;
    }
    ppuVar2 = &PTR_cf_com_apple_itunes_extras_10088fbe0;
    goto LAB_1005d11a4;
  case 0xf:
    bVar3 = (param_3 & 1) == 0;
    ppuVar1 = &PTR_cf_com_apple_videos_movies_rental_10088fbd0;
    ppuVar2 = &PTR_cf_com_apple_videos_movies_rental_cloud_10088fbd8;
    break;
  case 0x10:
    bVar3 = (param_3 & 1) == 0;
    ppuVar1 = &PTR_cf_com_apple_videos_tvshows_rental_10088fbb0;
    ppuVar2 = &PTR_cf_com_apple_videos_tvshows_rental_cloud_10088fbb8;
  }
  if (bVar3) {
    ppuVar2 = ppuVar1;
  }
LAB_1005d11a4:
  FUN_1001ab010(param_1,ppuVar2);
  return param_1;
}

