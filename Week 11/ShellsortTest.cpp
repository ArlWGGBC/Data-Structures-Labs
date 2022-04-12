const team = {

  _players: [
  {
    firstName: 'Pete',
    lastName: 'Wheeler',
    age: 11
  },
  {
    firstName: 'Alex',
    lastName: 'Sanchez',
    age: 12
  }
  ],
  _games: [
    {
      opponent: 'Broncos',
      teamPoints: 42,
      opponentPoints: 27
    },
    {
      opponent: 'Tigers',
      teamPoints: 23,
      opponentPoints: 11
    },
    {
      opponent: 'Indians',
      teamPoints: 25,
      opponentPoints: 23
    }
  ],

  get players() {
    return this._players;
  },
  get games() {
    return this._games;
  },
  addPlayer(firstName, lastName, age) {
    let player = {
      firstName: firstName,
      lastName: lastName,
      age: age
    };
    this.players.push(player);
  },
  addGame(opp, myPts, oppPts) {
    const game = {
      opponent: opp,
      teamPoints: myPts,
      opponentPoints: oppPts
    };
    this.games.push(game);
  }
}

team.addPlayer('Steph', 'Curry', 28);
team.addPlayer('Lisa','Leslie' , 44);
team.addPlayer('Bugs', 'Bunny', 76);

team.addGame('Titans', 100, 98);
team.addGame('Warriors', 105, 124);
team.addGame('Slayers', 135, 78);

console.log(team._games);
console.log(team._players);