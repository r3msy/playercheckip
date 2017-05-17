forward CheckPlayerIp(playerid);

public CheckPlayerIp(playerid)
{
	new rows;

	cache_get_row_count(rows);
	
	if(rows)
	{
		new last_connect;
		cache_get_value_name_int(0, "last_connect", last_connect);
		
		if(gettime() - last_connect < RECONNECT_INTERVAL)
		{
			return Kick(playerid, "Переподключаться к серверу можно раз в 60 секунд!", "\n\n"COLOR_NOTE"Чтобы выйти из игры используйте команду /q(uit)");
		}
	}
  return 1;
}
