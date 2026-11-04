// name: FUN_100152e33
// address: 100152e33

void FUN_100152e33(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  puVar2 = PTR_s_isEqual__10088bde8;
  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_isEqual__10088bde8,&cf_cookies);
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_username);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_passwordtoken);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_firstname);
        if (((cVar3 == '\0') &&
            (cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_lastname),
            cVar3 == '\0')) &&
           (cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_fullname), cVar3 == '\0'
           )) {
          cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_paidpasswordsettings);
          if ((cVar3 == '\0') &&
             (cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_freepasswordsettings),
             cVar3 == '\0')) {
            cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_creditbalance);
            if (cVar3 == '\0') {
              cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                (uVar4,puVar2,&cf_lastapplemusicsubscriptionDRMrefreshtime);
              if (cVar3 == '\0') {
                cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                  (uVar4,puVar2,&cf_explicitcontentbadgetreatment);
                if (cVar3 == '\0') {
                  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                    (uVar4,puVar2,&cf_enrolledinapplemusic);
                  if (cVar3 == '\0') {
                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                      (uVar4,puVar2,&cf_applemusicsubscriptionexpirationtime);
                    if (cVar3 == '\0') {
                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                        (uVar4,puVar2,&cf_enrolledinmatch);
                      if (cVar3 == '\0') {
                        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                          (uVar4,puVar2,&cf_hascloudlibrary);
                        if (cVar3 == '\0') {
                          cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                            (uVar4,puVar2,&cf_hasofflineslot);
                          if (cVar3 == '\0') {
                            cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,&cf_isminor)
                            ;
                            if (cVar3 == '\0') {
                              cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                (uVar4,puVar2,&cf_ismanagedstudent);
                              if (cVar3 == '\0') {
                                cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                  (uVar4,puVar2,&cf_isapplemusicadmin);
                                if (cVar3 == '\0') {
                                  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                    (uVar4,puVar2,
                                                     &cf_hasapplemusicartistlistsharepermissions);
                                  if (cVar3 == '\0') {
                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                      (uVar4,puVar2,&cf_inapplemusicfreetrial);
                                    if (cVar3 == '\0') {
                                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                        (uVar4,puVar2,
                                                         &cf_notelegibleforapplemusicfreetrial);
                                      if (cVar3 == '\0') {
                                        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                          (uVar4,puVar2,&cf_hasfamily);
                                        if (cVar3 == '\0') {
                                          cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                            (uVar4,puVar2,
                                                             &cf_hasfamilyapplemusicsubscription);
                                          if (cVar3 == '\0') {
                                            cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                              (uVar4,puVar2,&cf_isheadofhousehold);
                                            if (cVar3 == '\0') {
                                              cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                (uVar4,puVar2,
                                                                 &cf_hasfamilywithmorethanonemember)
                                              ;
                                              if (cVar3 == '\0') {
                                                cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                  (uVar4,puVar2,
                                                                   &cf_isapplemusicpurchaser);
                                                if (cVar3 == '\0') {
                                                  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                    (uVar4,puVar2,
                                                                     &
                                                  cf_sawapplemusicfamilymemberfirsttimepage);
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &cf_onboardedtoamf);
                                                    if (cVar3 == '\0') {
                                                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,
                                                                         &cf_amfprofileid);
                                                      if (cVar3 == '\0') {
                                                        cVar3 = (*(code *)
                                                  PTR__objc_msgSend_10082c770)
                                                            (uVar4,puVar2,
                                                             &cf_mediaremotedelegateuuid);
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &cf_privatelistening);
                                                    if (cVar3 == '\0') {
                                                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,
                                                                         &cf_optedintoradio);
                                                      if (cVar3 == '\0') {
                                                        cVar3 = (*(code *)
                                                  PTR__objc_msgSend_10082c770)
                                                            (uVar4,puVar2,
                                                             &
                                                  cf_hasexplicitcontentageverificationrequirement);
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &
                                                  cf_explicitcontentcontainerviewcount);
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &
                                                  cf_warnedofexplicitcontentdisabled);
                                                  if (cVar3 == '\0') {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,&cf_familyid);
                                                    if (cVar3 == '\0') {
                                                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,&cf_storefront
                                                                        );
                                                      if (cVar3 == '\0') {
                                                        cVar3 = (*(code *)
                                                  PTR__objc_msgSend_10082c770)
                                                            (uVar4,puVar2,
                                                             &cf_prefers1080pHDvideodownload);
                                                  uVar5 = 0x10000000000;
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,
                                                                         &
                                                  cf_prefers480SDvideodownload), cVar3 == '\0')) {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &
                                                  cf_validautodownloadmediatypes);
                                                  uVar5 = 0x40000000000;
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,
                                                                         &cf_autodownloadmediatypes)
                                                     , cVar3 == '\0')) {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,&cf_geniuscuid);
                                                    if ((cVar3 == '\0') &&
                                                       (cVar3 = (*(code *)
                                                  PTR__objc_msgSend_10082c770)
                                                            (uVar4,puVar2,&cf_optedintogenius),
                                                  cVar3 == '\0')) {
                                                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                      (uVar4,puVar2,
                                                                       &cf_privacyAcknowledgement);
                                                    if (cVar3 == '\0') {
                                                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                                        (uVar4,puVar2,
                                                                         &cf_accountFlags);
                                                      if (cVar3 == '\0') goto LAB_100152f0f;
                                                      puVar1 = (ulong *)(*(long *)(*(long *)(param_1
                                                                                            + 0x20)
                                                                                  + 8) + 0x18);
                                                      *puVar1 = *puVar1 | 0x1000;
                                                      puVar1 = (ulong *)(*(long *)(*(long *)(param_1
                                                                                            + 0x20)
                                                                                  + 8) + 0x18);
                                                      *puVar1 = *puVar1 | 0x400000000;
                                                      puVar1 = (ulong *)(*(long *)(*(long *)(param_1
                                                                                            + 0x20)
                                                                                  + 8) + 0x18);
                                                      *puVar1 = *puVar1 | 0x10000;
                                                      uVar5 = 0x80000000000;
                                                    }
                                                    else {
                                                      uVar5 = 0x10000000;
                                                    }
                                                  }
                                                  else {
                                                    uVar5 = 0x100;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x8000000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x400000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x1000000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x800000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x200000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x100000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x80000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x40000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x2000000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x20000000;
                                                  }
                                                  }
                                                  else {
                                                    uVar5 = 0x8000000;
                                                  }
                                                }
                                                else {
                                                  uVar5 = 0x4000000;
                                                }
                                              }
                                              else {
                                                uVar5 = 0x2000000;
                                              }
                                            }
                                            else {
                                              uVar5 = 0x1000000;
                                            }
                                          }
                                          else {
                                            uVar5 = 0x800000;
                                          }
                                        }
                                        else {
                                          uVar5 = 0x200000;
                                        }
                                      }
                                      else {
                                        uVar5 = 0x100000;
                                      }
                                    }
                                    else {
                                      uVar5 = 0x80000;
                                    }
                                  }
                                  else {
                                    uVar5 = 0x10;
                                  }
                                }
                                else {
                                  uVar5 = 0x4000000000;
                                }
                              }
                              else {
                                uVar5 = 0x40000;
                              }
                            }
                            else {
                              uVar5 = 0x20000;
                            }
                          }
                          else {
                            uVar5 = 0x8000;
                          }
                        }
                        else {
                          uVar5 = 0x4000;
                        }
                      }
                      else {
                        uVar5 = 0x2000;
                      }
                    }
                    else {
                      uVar5 = 0x800;
                    }
                  }
                  else {
                    uVar5 = 0x200;
                  }
                }
                else {
                  uVar5 = 0x80;
                }
              }
              else {
                uVar5 = 0x400;
              }
            }
            else {
              uVar5 = 0x40;
            }
          }
          else {
            uVar5 = 8;
          }
        }
        else {
          uVar5 = 0x20;
        }
      }
      else {
        uVar5 = 4;
      }
    }
    else {
      uVar5 = 2;
    }
    puVar1 = (ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
    *puVar1 = *puVar1 | uVar5;
  }
LAB_100152f0f:
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return;
}

