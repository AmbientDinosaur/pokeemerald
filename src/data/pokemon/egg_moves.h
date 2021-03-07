#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(BULBASAUR,
              MOVE_SKULL_BASH,
              MOVE_CHARM,
              MOVE_PETAL_DANCE,
              MOVE_MAGICAL_LEAF,
              MOVE_CURSE),

    egg_moves(CHARMANDER,
              MOVE_BELLY_DRUM,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_BEAT_UP,
              MOVE_SWORDS_DANCE,
              MOVE_DRAGON_DANCE),

    egg_moves(SQUIRTLE,
              MOVE_MIRROR_COAT,
              MOVE_HAZE,
              MOVE_MIST,
              MOVE_FLAIL,
              MOVE_REFRESH,
              MOVE_YAWN),

    egg_moves(PIDGEY,
              MOVE_PURSUIT,
              MOVE_FEINT_ATTACK,
              MOVE_AIR_CUTTER),

    egg_moves(RATTATA,
              MOVE_SCREECH,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_SWIPES,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_UPROAR,
              MOVE_SWAGGER),

    egg_moves(SPEAROW,
              MOVE_FEINT_ATTACK,
              MOVE_FALSE_SWIPE,
              MOVE_SCARY_FACE,
              MOVE_QUICK_ATTACK,
              MOVE_TRI_ATTACK,
              MOVE_ASTONISH,
              MOVE_SKY_ATTACK),

    egg_moves(EKANS,
              MOVE_PURSUIT,
              MOVE_SLAM,
              MOVE_SPITE,
              MOVE_BEAT_UP,
              MOVE_POISON_FANG),

    egg_moves(SANDSHREW,
              MOVE_FLAIL,
              MOVE_COUNTER,
              MOVE_RAPID_SPIN,
              MOVE_ROCK_SLIDE,
              MOVE_METAL_CLAW,
              MOVE_CRUSH_CLAW),

    egg_moves(NIDORAN_F,
              MOVE_SUPERSONIC,
              MOVE_DISABLE,
              MOVE_TAKE_DOWN,
              MOVE_FOCUS_ENERGY,
              MOVE_CHARM,
              MOVE_COUNTER,
              MOVE_BEAT_UP),

    egg_moves(NIDORAN_M,
              MOVE_COUNTER,
              MOVE_DISABLE,
              MOVE_SUPERSONIC,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_CONFUSION,
              MOVE_BEAT_UP),

    egg_moves(VULPIX,
              MOVE_FEINT_ATTACK,
              MOVE_HYPNOSIS,
              MOVE_FLAIL,
              MOVE_HOWL,
              MOVE_PSYCH_UP,
              MOVE_HEAT_WAVE),

    egg_moves(ZUBAT,
              MOVE_QUICK_ATTACK,
              MOVE_PURSUIT,
              MOVE_FEINT_ATTACK,
              MOVE_GUST,
              MOVE_WHIRLWIND,
              MOVE_CURSE),

    egg_moves(ODDISH,
              MOVE_SWORDS_DANCE,
              MOVE_RAZOR_LEAF,
              MOVE_FLAIL,
              MOVE_SYNTHESIS,
              MOVE_CHARM,
              MOVE_INGRAIN),

    egg_moves(PARAS,
              MOVE_FALSE_SWIPE,
              MOVE_SCREECH,
              MOVE_COUNTER,
              MOVE_PSYBEAM,
              MOVE_FLAIL,
              MOVE_SWEET_SCENT,
              MOVE_LIGHT_SCREEN,
              MOVE_PURSUIT),

    egg_moves(VENONAT,
              MOVE_BATON_PASS),

    egg_moves(DIGLETT,
              MOVE_FEINT_ATTACK,
              MOVE_SCREECH,
              MOVE_ANCIENT_POWER,
              MOVE_PURSUIT,
              MOVE_BEAT_UP,
              MOVE_UPROAR,
              MOVE_ROCK_SLIDE),

    egg_moves(MEOWTH,
              MOVE_SPITE,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_AMNESIA,
              MOVE_PSYCH_UP,
              MOVE_ASSIST),

    egg_moves(PSYDUCK,
              MOVE_HYPNOSIS,
              MOVE_PSYBEAM,
              MOVE_FUTURE_SIGHT,
              MOVE_CROSS_CHOP,
              MOVE_REFRESH),

    egg_moves(MANKEY,
              MOVE_ROCK_SLIDE,
              MOVE_MEDITATE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE),

    egg_moves(GROWLITHE,
              MOVE_BODY_SLAM,
              MOVE_THRASH,
              MOVE_FIRE_SPIN,
              MOVE_HEAT_WAVE),

    egg_moves(POLIWAG,
              MOVE_MIST,
              MOVE_SPLASH,
              MOVE_HAZE,
              MOVE_MIND_READER,
              MOVE_ICE_BALL),

    egg_moves(ABRA,
              MOVE_ENCORE,
              MOVE_BARRIER,
              MOVE_KNOCK_OFF,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(MACHOP,
              MOVE_MEDITATE,
              MOVE_ROLLING_KICK,
              MOVE_ENCORE,
              MOVE_COUNTER,
              MOVE_ROCK_SLIDE),

    egg_moves(BELLSPROUT,
              MOVE_SWORDS_DANCE,
              MOVE_ENCORE,
              MOVE_SYNTHESIS,
              MOVE_INGRAIN,
              MOVE_MAGICAL_LEAF),

    egg_moves(TENTACOOL,
              MOVE_AURORA_BEAM,
              MOVE_MIRROR_COAT,
              MOVE_RAPID_SPIN,
              MOVE_HAZE,
              MOVE_CONFUSE_RAY),

    egg_moves(GEODUDE,
              MOVE_MEGA_PUNCH,
              MOVE_ROCK_SLIDE,
              MOVE_BLOCK),

    egg_moves(PONYTA,
              MOVE_THRASH,
              MOVE_HYPNOSIS,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE),

    egg_moves(SLOWPOKE,
              MOVE_BELLY_DRUM,
              MOVE_FUTURE_SIGHT,
              MOVE_STOMP,
              MOVE_SLEEP_TALK,
              MOVE_SNORE),

    egg_moves(FARFETCHD,
              MOVE_MIRROR_MOVE,
              MOVE_GUST,
              MOVE_QUICK_ATTACK,
              MOVE_FLAIL,
              MOVE_FEATHER_DANCE,
              MOVE_CURSE),

    egg_moves(DODUO,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_FEINT_ATTACK,
              MOVE_FLAIL),

    egg_moves(SEEL,
              MOVE_PERISH_SONG,
              MOVE_DISABLE,
              MOVE_HORN_DRILL,
              MOVE_SLAM,
              MOVE_FAKE_OUT,
              MOVE_ICICLE_SPEAR),

    egg_moves(GRIMER,
              MOVE_HAZE,
              MOVE_MEAN_LOOK,
              MOVE_LICK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION),

    egg_moves(SHELLDER,
              MOVE_BUBBLE_BEAM,
              MOVE_TAKE_DOWN,
              MOVE_BARRIER,
              MOVE_RAPID_SPIN,
              MOVE_SCREECH),

    egg_moves(GASTLY,
              MOVE_PSYWAVE,
              MOVE_PERISH_SONG,
              MOVE_HAZE,
              MOVE_ASTONISH,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_EXPLOSION),

    egg_moves(ONIX,
              MOVE_FLAIL,
              MOVE_EXPLOSION,
              MOVE_BLOCK),

    egg_moves(DROWZEE,
              MOVE_BARRIER,
              MOVE_ASSIST,
              MOVE_ROLE_PLAY,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(KRABBY,
              MOVE_HAZE,
              MOVE_AMNESIA,
              MOVE_SLAM,
              MOVE_KNOCK_OFF),

    egg_moves(EXEGGCUTE,
              MOVE_SYNTHESIS,
              MOVE_MOONLIGHT,
              MOVE_ANCIENT_POWER,
              MOVE_PSYCH_UP,
              MOVE_INGRAIN,
              MOVE_CURSE),

    egg_moves(CUBONE,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_BELLY_DRUM,
              MOVE_SCREECH,
              MOVE_SKULL_BASH,
              MOVE_PERISH_SONG,
              MOVE_SWORDS_DANCE),

    egg_moves(LICKITUNG,
              MOVE_MAGNITUDE,
              MOVE_BODY_SLAM,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              MOVE_SUBSTITUTE),

    egg_moves(KOFFING,
              MOVE_SCREECH,
              MOVE_PSYWAVE,
              MOVE_PSYBEAM,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP),

    egg_moves(RHYHORN,
              MOVE_CRUNCH,
              MOVE_REVERSAL,
              MOVE_ROCK_SLIDE,
              MOVE_COUNTER,
              MOVE_MAGNITUDE,
              MOVE_SWORDS_DANCE,
              MOVE_CURSE,
              MOVE_CRUSH_CLAW),

    egg_moves(CHANSEY,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_HEAL_BELL,
              MOVE_AROMATHERAPY,
              MOVE_SUBSTITUTE),

    egg_moves(TANGELA,
              MOVE_FLAIL,
              MOVE_CONFUSION,
              MOVE_AMNESIA,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),

    egg_moves(KANGASKHAN,
              MOVE_STOMP,
              MOVE_DISABLE,
              MOVE_COUNTER,
              MOVE_CRUSH_CLAW,
              MOVE_SUBSTITUTE),

    egg_moves(HORSEA,
              MOVE_FLAIL,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_DISABLE,
              MOVE_SPLASH),

    egg_moves(GOLDEEN,
              MOVE_PSYBEAM,
              MOVE_HAZE,
              MOVE_HYDRO_PUMP,
              MOVE_SLEEP_TALK),

    egg_moves(MR_MIME,
              MOVE_FUTURE_SIGHT,
              MOVE_HYPNOSIS,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT),

    egg_moves(SCYTHER,
              MOVE_COUNTER,
              MOVE_BATON_PASS,
              MOVE_REVERSAL,
              MOVE_ENDURE,
              MOVE_SILVER_WIND),

    egg_moves(PINSIR,
              MOVE_FURY_ATTACK,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE,
              MOVE_FEINT_ATTACK),

    egg_moves(LAPRAS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_REFRESH,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_HORN_DRILL),

    egg_moves(EEVEE,
              MOVE_FLAIL,
              MOVE_ENDURE,
              MOVE_CURSE,
              MOVE_TICKLE,
              MOVE_WISH),

    egg_moves(OMANYTE,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_SLAM,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_ROCK_SLIDE,
              MOVE_SPIKES),

    egg_moves(KABUTO,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_RAPID_SPIN,
              MOVE_FLAIL,
              MOVE_KNOCK_OFF,
              MOVE_CONFUSE_RAY),

    egg_moves(AERODACTYL,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_DRAGON_BREATH,
              MOVE_CURSE),

    egg_moves(SNORLAX,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SUBSTITUTE),

    egg_moves(DRATINI,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_SUPERSONIC),

    egg_moves(CHIKORITA,
              MOVE_VINE_WHIP,
              MOVE_LEECH_SEED,
              MOVE_COUNTER,
              MOVE_FLAIL,
              MOVE_NATURE_POWER,
              MOVE_INGRAIN),

    egg_moves(CYNDAQUIL,
              MOVE_FURY_SWIPES,
              MOVE_REVERSAL,
              MOVE_THRASH,
              MOVE_COVET,
              MOVE_HOWL,
              MOVE_CRUSH_CLAW),

    egg_moves(TOTODILE,
              MOVE_THRASH,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE),

    egg_moves(SENTRET,
              MOVE_DOUBLE_EDGE,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_FOCUS_ENERGY,
              MOVE_REVERSAL,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              MOVE_ASSIST),

    egg_moves(HOOTHOOT,
              MOVE_MIRROR_MOVE,
              MOVE_SUPERSONIC,
              MOVE_FEINT_ATTACK,
              MOVE_WING_ATTACK,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_FEATHER_DANCE),

    egg_moves(LEDYBA,
              MOVE_PSYBEAM,
              MOVE_BIDE),

    egg_moves(SPINARAK,
              MOVE_PSYBEAM,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_PURSUIT,
              MOVE_SIGNAL_BEAM),

    egg_moves(CHINCHOU,
              MOVE_SCREECH,
              MOVE_AMNESIA),

    egg_moves(PICHU,
              MOVE_REVERSAL,
              MOVE_BIDE,
              MOVE_PRESENT,
              MOVE_ENCORE,
              MOVE_DOUBLE_SLAP,
              MOVE_WISH,
              MOVE_CHARGE),

    egg_moves(CLEFFA,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_AMNESIA,
              MOVE_BELLY_DRUM,
              MOVE_SPLASH,
              MOVE_MIMIC,
              MOVE_WISH,
              MOVE_SUBSTITUTE),

    egg_moves(IGGLYBUFF,
              MOVE_PERISH_SONG,
              MOVE_PRESENT,
              MOVE_FEINT_ATTACK,
              MOVE_WISH,
              MOVE_FAKE_TEARS),

    egg_moves(TOGEPI,
              MOVE_PRESENT,
              MOVE_MIRROR_MOVE,
              MOVE_PECK,
              MOVE_FUTURE_SIGHT,
              MOVE_SUBSTITUTE,
              MOVE_PSYCH_UP),

    egg_moves(NATU,
              MOVE_HAZE,
              MOVE_QUICK_ATTACK,
              MOVE_FEINT_ATTACK,
              MOVE_PSYCH_UP,
              MOVE_FEATHER_DANCE,
              MOVE_REFRESH),

    egg_moves(MAREEP,
              MOVE_BODY_SLAM,
              MOVE_SCREECH),

    egg_moves(MARILL,
              MOVE_PRESENT,
              MOVE_AMNESIA,
              MOVE_FUTURE_SIGHT,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_SUPERSONIC,
              MOVE_SUBSTITUTE),

    egg_moves(SUDOWOODO,
              MOVE_SELF_DESTRUCT),

    egg_moves(HOPPIP,
              MOVE_CONFUSION,
              MOVE_ENCORE,
              MOVE_DOUBLE_EDGE,
              MOVE_AMNESIA,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP),

    egg_moves(AIPOM,
              MOVE_COUNTER,
              MOVE_PURSUIT,
              MOVE_SPITE,
              MOVE_SLAM,
              MOVE_DOUBLE_SLAP,
              MOVE_BEAT_UP),

    egg_moves(SUNKERN,
              MOVE_ENCORE,
              MOVE_NATURE_POWER,
              MOVE_CURSE,
              MOVE_HELPING_HAND),

    egg_moves(YANMA,
              MOVE_WHIRLWIND,
              MOVE_REVERSAL,
              MOVE_LEECH_LIFE,
              MOVE_SILVER_WIND),

    egg_moves(WOOPER,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_CURSE,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP),

    egg_moves(MURKROW,
              MOVE_WHIRLWIND,
              MOVE_MIRROR_MOVE,
              MOVE_SKY_ATTACK,
              MOVE_CONFUSE_RAY,
              MOVE_FEATHER_DANCE,
              MOVE_PERISH_SONG),

    egg_moves(MISDREAVUS,
              MOVE_DESTINY_BOND,
              MOVE_PSYCH_UP,
              MOVE_IMPRISON),

    egg_moves(GIRAFARIG,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_FUTURE_SIGHT,
              MOVE_BEAT_UP,
              MOVE_PSYCH_UP,
              MOVE_WISH,
              MOVE_MAGIC_COAT),

    egg_moves(PINECO,
              MOVE_FLAIL,
              MOVE_SWIFT,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(DUNSPARCE,
              MOVE_BIDE,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_ASTONISH,
              MOVE_CURSE),

    egg_moves(GLIGAR,
              MOVE_METAL_CLAW,
              MOVE_COUNTER,
              MOVE_SAND_TOMB),

    egg_moves(SNUBBULL,
              MOVE_METRONOME,
              MOVE_FEINT_ATTACK,
              MOVE_PRESENT,
              MOVE_HEAL_BELL,
              MOVE_SNORE),

    egg_moves(QWILFISH,
              MOVE_FLAIL,
              MOVE_HAZE,
              MOVE_BUBBLE_BEAM,
              MOVE_SUPERSONIC,
              MOVE_ASTONISH),

    egg_moves(SHUCKLE,
              MOVE_SWEET_SCENT),

    egg_moves(HERACROSS,
              MOVE_HARDEN,
              MOVE_BIDE,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE),

    egg_moves(SNEASEL,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_BITE,
              MOVE_CRUSH_CLAW,
              MOVE_FAKE_OUT),

    egg_moves(TEDDIURSA,
              MOVE_CRUNCH,
              MOVE_TAKE_DOWN,
              MOVE_SEISMIC_TOSS,
              MOVE_COUNTER,
              MOVE_METAL_CLAW,
              MOVE_YAWN,
              MOVE_SLEEP_TALK),

    egg_moves(SLUGMA,
              MOVE_ACID_ARMOR,
              MOVE_HEAT_WAVE),

    egg_moves(SWINUB,
              MOVE_BITE,
              MOVE_BODY_SLAM,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_MUD_SHOT,
              MOVE_ICICLE_SPEAR,
              MOVE_DOUBLE_EDGE),

    egg_moves(CORSOLA,
              MOVE_ROCK_SLIDE,
              MOVE_SCREECH,
              MOVE_MIST,
              MOVE_AMNESIA,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY,
              MOVE_ICICLE_SPEAR),

    egg_moves(REMORAID,
              MOVE_OCTAZOOKA,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_SCREECH,
              MOVE_THUNDER_WAVE,
              MOVE_ROCK_BLAST),

    egg_moves(DELIBIRD,
              MOVE_AURORA_BEAM,
              MOVE_QUICK_ATTACK,
              MOVE_FUTURE_SIGHT,
              MOVE_SPLASH,
              MOVE_RAPID_SPIN,
              MOVE_ICE_BALL),

    egg_moves(MANTINE,
              MOVE_TWISTER,
              MOVE_HAZE,
              MOVE_SLAM,
              MOVE_ROCK_SLIDE),

    egg_moves(SKARMORY,
              MOVE_PURSUIT,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_CURSE),

    egg_moves(HOUNDOUR,
              MOVE_FIRE_SPIN,
              MOVE_RAGE,
              MOVE_PURSUIT,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_REVERSAL,
              MOVE_WILL_O_WISP),

    egg_moves(PHANPY,
              MOVE_FOCUS_ENERGY,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SNORE,
              MOVE_COUNTER,
              MOVE_FISSURE),

    egg_moves(STANTLER,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_BITE,
              MOVE_SWAGGER,
              MOVE_PSYCH_UP,
              MOVE_EXTRASENSORY),

    egg_moves(TYROGUE,
              MOVE_RAPID_SPIN,
              MOVE_HI_JUMP_KICK,
              MOVE_MACH_PUNCH,
              MOVE_MIND_READER),

    egg_moves(SMOOCHUM,
              MOVE_MEDITATE,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_WISH),

    egg_moves(ELEKID,
              MOVE_KARATE_CHOP,
              MOVE_BARRIER,
              MOVE_ROLLING_KICK,
              MOVE_MEDITATE,
              MOVE_CROSS_CHOP,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH),

    egg_moves(MAGBY,
              MOVE_KARATE_CHOP,
              MOVE_MEGA_PUNCH,
              MOVE_BARRIER,
              MOVE_SCREECH,
              MOVE_CROSS_CHOP,
              MOVE_THUNDER_PUNCH),

    egg_moves(MILTANK,
              MOVE_PRESENT,
              MOVE_REVERSAL,
              MOVE_SEISMIC_TOSS,
              MOVE_ENDURE,
              MOVE_PSYCH_UP,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_SLEEP_TALK),

    egg_moves(LARVITAR,
              MOVE_PURSUIT,
              MOVE_STOMP,
              MOVE_OUTRAGE,
              MOVE_FOCUS_ENERGY,
              MOVE_ANCIENT_POWER,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE),

    egg_moves(TREECKO,
              MOVE_CRUNCH,
              MOVE_LEECH_SEED,
              MOVE_DRAGON_BREATH,
              MOVE_CRUSH_CLAW),

    egg_moves(TORCHIC,
              MOVE_COUNTER,
              MOVE_ENDURE,
              MOVE_SWAGGER,
              MOVE_ROCK_SLIDE),

    egg_moves(MUDKIP,
              MOVE_REFRESH,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_STOMP,
              MOVE_ICE_BALL,
              MOVE_MIRROR_COAT),

    egg_moves(POOCHYENA,
              MOVE_ASTONISH,
              MOVE_POISON_FANG,
              MOVE_COVET,
              MOVE_LEER),

    egg_moves(ZIGZAGOON,
              MOVE_CHARM,
              MOVE_PURSUIT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_TRICK),

    egg_moves(LOTAD,
              MOVE_SYNTHESIS,
              MOVE_RAZOR_LEAF,
              MOVE_SWEET_SCENT,
              MOVE_LEECH_SEED),

    egg_moves(SEEDOT,
              MOVE_LEECH_SEED,
              MOVE_AMNESIA,
              MOVE_QUICK_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_TAKE_DOWN,
              MOVE_FALSE_SWIPE),

    egg_moves(NINCADA,
              MOVE_ENDURE,
              MOVE_FEINT_ATTACK,
              MOVE_GUST,
              MOVE_SILVER_WIND),

    egg_moves(TAILLOW,
              MOVE_PURSUIT,
              MOVE_SUPERSONIC,
              MOVE_REFRESH,
              MOVE_MIRROR_MOVE,
              MOVE_RAGE,
              MOVE_SKY_ATTACK),

    egg_moves(SHROOMISH,
              MOVE_FAKE_TEARS,
              MOVE_SWAGGER,
              MOVE_CHARM,
              MOVE_FALSE_SWIPE,
              MOVE_HELPING_HAND),

    egg_moves(SPINDA,
              MOVE_ENCORE,
              MOVE_ROCK_SLIDE,
              MOVE_ASSIST,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_WISH,
              MOVE_TRICK),

    egg_moves(WINGULL,
              MOVE_TWISTER,
              MOVE_GUST),

    egg_moves(SURSKIT,
              MOVE_MUD_SHOT,
              MOVE_PSYBEAM,
              MOVE_HYDRO_PUMP,
              MOVE_MIND_READER),

    egg_moves(WAILMER,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH,
              MOVE_SWAGGER,
              MOVE_SNORE,
              MOVE_SLEEP_TALK,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_TICKLE),

    egg_moves(SKITTY,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_UPROAR,
              MOVE_FAKE_TEARS,
              MOVE_WISH,
              MOVE_BATON_PASS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE),

    egg_moves(KECLEON,
              MOVE_DISABLE,
              MOVE_MAGIC_COAT,
              MOVE_TRICK),

    egg_moves(NOSEPASS,
              MOVE_MAGNITUDE,
              MOVE_ROLLOUT,
              MOVE_EXPLOSION),

    egg_moves(TORKOAL,
              MOVE_ENDURE,
              MOVE_SLEEP_TALK,
              MOVE_YAWN),

    egg_moves(SABLEYE,
              MOVE_PSYCH_UP,
              MOVE_MOONLIGHT),

    egg_moves(BARBOACH,
              MOVE_THRASH,
              MOVE_WHIRLPOOL,
              MOVE_SPARK),

    egg_moves(LUVDISC,
              MOVE_SPLASH,
              MOVE_SUPERSONIC),

    egg_moves(CORPHISH,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER),

    egg_moves(FEEBAS,
              MOVE_MIRROR_COAT,
              MOVE_DRAGON_BREATH,
              MOVE_HYPNOSIS,
              MOVE_CONFUSE_RAY),

    egg_moves(CARVANHA,
              MOVE_HYDRO_PUMP,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH),

    egg_moves(TRAPINCH,
              MOVE_FOCUS_ENERGY,
              MOVE_QUICK_ATTACK,
              MOVE_GUST),

    egg_moves(MAKUHITA,
              MOVE_FEINT_ATTACK,
              MOVE_DETECT,
              MOVE_HELPING_HAND,
              MOVE_CROSS_CHOP,
              MOVE_REVENGE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(ELECTRIKE,
              MOVE_CRUNCH,
              MOVE_HEADBUTT,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_SWIFT),

    egg_moves(NUMEL,
              MOVE_HOWL,
              MOVE_SCARY_FACE,
              MOVE_BODY_SLAM,
              MOVE_ROLLOUT,
              MOVE_DEFENSE_CURL,
              MOVE_STOMP),

    egg_moves(SPHEAL,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_YAWN,
              MOVE_ROCK_SLIDE,
              MOVE_CURSE,
              MOVE_FISSURE),

    egg_moves(CACNEA,
              MOVE_ACID,
              MOVE_TEETER_DANCE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER),

    egg_moves(SNORUNT,
              MOVE_BLOCK,
              MOVE_SPIKES),

    egg_moves(AZURILL,
              MOVE_ENCORE,
              MOVE_SING,
              MOVE_REFRESH,
              MOVE_TICKLE),

    egg_moves(SPOINK,
              MOVE_FUTURE_SIGHT,
              MOVE_EXTRASENSORY,
              MOVE_SUBSTITUTE,
              MOVE_TRICK),

    egg_moves(PLUSLE,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(MINUN,
              MOVE_SUBSTITUTE,
              MOVE_WISH),

    egg_moves(MAWILE,
              MOVE_SWORDS_DANCE,
              MOVE_FALSE_SWIPE,
              MOVE_POISON_FANG,
              MOVE_PSYCH_UP,
              MOVE_ANCIENT_POWER,
              MOVE_TICKLE),

    egg_moves(MEDITITE,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_FAKE_OUT,
              MOVE_BATON_PASS,
              MOVE_DYNAMIC_PUNCH),

    egg_moves(SWABLU,
              MOVE_AGILITY,
              MOVE_HAZE,
              MOVE_PURSUIT,
              MOVE_RAGE),

    egg_moves(DUSKULL,
              MOVE_IMPRISON,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_FEINT_ATTACK),

    egg_moves(ROSELIA,
              MOVE_SPIKES,
              MOVE_SYNTHESIS,
              MOVE_PIN_MISSILE,
              MOVE_COTTON_SPORE),

    egg_moves(SLAKOTH,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_BODY_SLAM,
              MOVE_SNORE,
              MOVE_CRUSH_CLAW,
              MOVE_CURSE,
              MOVE_SLEEP_TALK),

    egg_moves(GULPIN,
              MOVE_DREAM_EATER,
              MOVE_ACID_ARMOR,
              MOVE_SMOG,
              MOVE_PAIN_SPLIT),

    egg_moves(TROPIUS,
              MOVE_HEADBUTT,
              MOVE_SLAM,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER),

    egg_moves(WHISMUR,
              MOVE_TAKE_DOWN,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_EXTRASENSORY),

    egg_moves(CLAMPERL,
              MOVE_REFRESH,
              MOVE_BODY_SLAM,
              MOVE_SUPERSONIC,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY),

    egg_moves(ABSOL,
              MOVE_BATON_PASS,
              MOVE_FEINT_ATTACK,
              MOVE_DOUBLE_EDGE,
              MOVE_MAGIC_COAT,
              MOVE_CURSE,
              MOVE_SUBSTITUTE),

    egg_moves(SHUPPET,
              MOVE_DISABLE,
              MOVE_DESTINY_BOND,
              MOVE_ASTONISH,
              MOVE_IMPRISON),

    egg_moves(SEVIPER,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_BODY_SLAM),

    egg_moves(ZANGOOSE,
              MOVE_FLAIL,
              MOVE_DOUBLE_KICK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_ROAR,
              MOVE_CURSE),

    egg_moves(RELICANTH,
              MOVE_MAGNITUDE,
              MOVE_SKULL_BASH,
              MOVE_AMNESIA,
              MOVE_SLEEP_TALK,
              MOVE_ROCK_SLIDE),

    egg_moves(ARON,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_STOMP),

    egg_moves(CASTFORM,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCH_UP),

    egg_moves(VOLBEAT,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_TRICK),

    egg_moves(ILLUMISE,
              MOVE_BATON_PASS,
              MOVE_GROWTH),

    egg_moves(LILEEP,
              MOVE_BARRIER,
              MOVE_RECOVER,
              MOVE_MIRROR_COAT,
              MOVE_ROCK_SLIDE),

    egg_moves(ANORITH,
              MOVE_RAPID_SPIN,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_ROCK_SLIDE),

    egg_moves(RALTS,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_MEAN_LOOK,
              MOVE_MEMENTO,
              MOVE_DESTINY_BOND),

    egg_moves(BAGON,
              MOVE_HYDRO_PUMP,
              MOVE_THRASH,
              MOVE_TWISTER,
              MOVE_DRAGON_DANCE),

    egg_moves(CHIMECHO,
              MOVE_DISABLE,
              MOVE_CURSE,
              MOVE_HYPNOSIS,
              MOVE_DREAM_EATER),

    EGG_MOVES_TERMINATOR
};
